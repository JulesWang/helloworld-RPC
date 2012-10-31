helloworld-RPC
==============

A VERY simple rpc example to start with.

master branch
-------------
The RPC server returns the strings "Hello world" when called.

xdr branch
----------
Demostrate the use of xdr.
The RPC server swap the a,b in struct AB, and return it back.

Usage
=====

CMD
---

\> make

\> sudo ./server

\> ./client localhost

Output
---------------

**master**: 
> Returned string=Hello world

**XDR branch**:
> Returned a=20,b=10

Reference
=========

* http://people.cs.clemson.edu/~wayne/cpsc824/samples/simple_rpc/index.shtml
* http://www.cs.cf.ac.uk/Dave/C/node34.html
