### Django Implementation  

This is the current database query optimization techniques,
Used to reduce the no of query that is executed. 

1. Prefetch Related and Select Related in Django 
2. Signals In Django 
3. Select For Update Query Optimization Technique 
4. Select Related : OneToOne Relationships, It performs a SQL join to fetch the 
records to find the elements. 
authors = Author.objects.select_related('book').all()
for author in authors:
    print(author.name)
    print(author.book.title)
5. Prefetch Related : ManyToMany Quer
Additional Database Query Apart from the other Query to fetch the records of the database
Many to Many RelationShip is begin used here.  


## Django Signals: 
1. Lets Suppose, Once User is created we want to find the changes.
2. @receiver(post_save, sender=User): passing the verify the data in the entry of the point of entry.


# ACID Properities 
Isolation will be happens 
This property ensures that multiple transactions can occur concurrently without leading to the inconsistency of the database state