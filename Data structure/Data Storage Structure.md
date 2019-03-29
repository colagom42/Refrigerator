###Concepts

Table
-where data exist.

Index
-path to the table

Since separating table and index (often called as 'key') have an advantage on mass storage, separated table & key is general data storage format of Relational data base.

##structure of separated table

Free list
l  ㄴㅡ ㅡ ㅡ ㄱ
l		ㅣ
l 		ㅣ
l		ㅣ
Empty block	Reusable block	   Full block...

 Empty or reusable blocks are recorded in Free list and Datas are stored at such blocks.
When there is no sufficient space, System condensing the Row to make a space. 'free space' under block are used when length of row changed.

 This method considerably decrease the computation when storaging, but increase so when accessing the data.
