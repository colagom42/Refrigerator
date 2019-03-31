#B-tree Index

Generally used.

##Structure

Root Block

Branch Block

Leaf Block

Branch -> leaf (using rowid) -> SGA explore -> Access disk, bring it to PGA, SQL's handing buffer. -> qualified row goto carry unit -> another access to disk...

proper  array size required

##B-tree index operation

A)Creation

-Access table, arrange data. (Bigger than sortareasize, temporary table space)

-Start recording leaf block.

-leaf Over PCTFREE, make branch to divide it

-branch Over PCTFREE, make new branch in higher order

Therefore, bigger index block is beneficial.

lower index column, big DB BLOCK SIZE,  least PCTFREE, key compression

B)Split

if new input is between existing index, split occur.

which lower storage space efficiency, so need rebuilding.

C)Delete and updating

Need manymany loading. many DML, Regular rebuilding required.

D) search via index

find root, goto satisfying dba, search, another dba...

##Reverse key index

RAndom access effective.

Lower clustering factor

#Bitmap index

##Charateristics and structure

-effective and or not null operation.

-best when low cardinality.

-not good for index changing

##Access to Bitmap index

Using index bitmap operation to reduce handing range.

#Function  Based Index (FBI)

using Logical column made by table columns to make index.

##Restriction

Later...

##Application

Very many...
