



###Concepts

Table
-where data exist.



Index
-path to the table

Since separating table and index (often called as 'key') have an advantage on mass storage, separated table & key is general data storage format of Relational data base.

#structure of separated table

Free list
l  ㄴㅡ ㅡ ㅡ ㄱ
l		ㅣ
l 		ㅣ
l		ㅣ


Empty block	Reusable block	   Full block...

 Empty or reusable blocks are recorded in Free list and Datas are stored at such blocks.
When there is no sufficient space, System condensing the Row to make a space. 'free space' under block are used when length of row changed.



 This method considerably decrease 

the computation when storaging, but increase so when accessing the data.

###Table space, Segment, Object, & partition

 -Table space
  physical Datafile

 -Segment
  divided space for Data object to be in.
  each object get into proper segment

 -Partition
  if one segment is not big or organized enough for object to get in, We divide table space partition and index, which can exist in different table spaces.

  It able data filed to be distinguished relatively on each object, not strictly or globally.

  Which able Index to be shortened.

###Changing position of ROWID and Fragment

 ROWID never divided. when it's length changed, it allocate the new place where full rowid can be stored.

 Change of length of rowid don't affect Index, By newly position the changed row in new place and change the posotion value of new place.

 So we don't have to change index each time we change the length of rowid.

 But if we chang so too many times, fragments (broken pieces of data) interrupt the changing position.

####Migration

 If space in block is not enough even if condensing activated, rows goto new block.

 Which cause a change of rowid.

 it can be solved by placing new row id on old row id, but it increase the time to access the data.

 such status is called "migration".

 it can only be fixed by delete and regenerate row or table.

###Chain

 When (Size of Row) > (Size of block), chain ocur. simmilar with migration, but different.

###Clustering factor

 How close data placed?

###Accession affcting properties

 A) Deal with wide range access

 	-Small table
	 
	 No problem

	-Middle table

	 1) find critical access form. solving it

	 2) Deal with other columns

	-Huge table
	 
	 A) Just storaging, like log data. Need fast storaging, and partitioning.

	 B) Random access, few  access form. seperated structure. ex) customer

	 C) Huge Data, continuously changing, manymany access form.

	  -index, table structure and SQL. synthetically considring required.

 B) Clustering factor improvement
 	
	periodically reorganizing data.

	Reduce chains, I/O, arrange Branch depth.

	*when rebuilding table, remove or disable index will improve the efficiency of index. activate it after regenerating.

# Index Organized table

 No rowid, using default key.

 No need to wide range access (migration or chain)

 = faster access

 limited Secondary index

 "Over fow" can happen

##Logical ROWID and Physical guess

 Since  index organized table cannot use rowid to generate new index, Therefore use physical 'guess', which is similar to rowid, but some operation like key partitioning can change tne physical location of the key, therefore physical guess not work.

 if such guess not working, we use default key instead. therefore less error.

 call this system s "logical ROWID"


 continuously changing data is not fit to this structure.


##Overflow area

 If data is too big (over PCTTHRESHOLD), data goes to overflow area, and rowid of data is recorded in index segment.

##Generating index organized table

 a. Organization index

 b. table space
  -for index

 c. PSTTHRESHOLD
  -over this, goto overflow area
 
 d. INCLUDING
  -dividing index and overflow.
   
   default : all index
   activate when firt new row input, if it over threshold, divide index and overflow.

 e. OVERFLOW TABLESPACE
  -designate where overflows goes.


#Clustering table


##What is clustering?

- is object

- Cluster > Table > Index

- bind the rows of tables

- need standdards (cluster key, pctfree ... )

##single table clustering

 One table in a cluster.

 just think as one-dimension above.

##Multitable Clustering

 two or more tables in a cluster.

 Don't have to access full record, independence of each table.

 but lower flexibility due to parent/child relation.

 also, more work when insert, change, delete.
