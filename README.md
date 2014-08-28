sproto-JIT
======
added JIT support for sproto. using [dynasm](http://corsix.github.io/dynasm-doc/index.html).

I think this is not a good idea. Because [sproto](https://github.com/cloudwu/sproto) mainly to lua binding.so the preformance mainly in the callback function. Although using JIT encode/decode can reduce instruction dispatch, improve cache utilization.using jit is best can have a 12% improvement after a simple test. :(


## require
currently only support POSIX X64.

## beachmack
my cpu is i5@2.4GHz 
the sproto schema:
```
.Person {
  name 6 : string
  id 2 : integer
  email 9 : string

  .PhoneNumber {
    number 3 : string
    type 1 : integer
  }

  phone 7 : *PhoneNumber
}

.AddressBook {
  person 5 : *Person
}
```
Use the data:
~~~.lua
local ab = {
  person = {
    {
      name = "Alice",
      id = 10000,
      phone = {
        { number = "123456789" , type = 1 },
        { number = "87654321" , type = 2 },
      }
    },
    {
      name = "Bob",
      id = 20000,
      phone = {
        { number = "01234567890" , type = 3 },
      }
    }
  }
}
~~~

| library | encode 1M times | decode 1M times |
|:--------:|:--------------:|:---------------:|
| sproto(no jit / nopack) | 1.83s | 5.96s |
| sproto(jit / nopack) | 1.54s | 5.31s |

the overall increase of 12.8%
