Enter password: ********
Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 17
Server version: 8.0.42 MySQL Community Server - GPL

Copyright (c) 2000, 2025, Oracle and/or its affiliates.

Oracle is a registered trademark of Oracle Corporation and/or its
affiliates. Other names may be trademarks of their respective
owners.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.

mysql> show databases;
+--------------------+
| Database           |
+--------------------+
| assignment_1       |
| db1                |
| information_schema |
| mysql              |
| performance_schema |
| sys                |
+--------------------+
6 rows in set (0.01 sec)

mysql> use db1;
Database changed
mysql> show tables;
+---------------+
| Tables_in_db1 |
+---------------+
| employee      |
| project       |
+---------------+
2 rows in set (0.01 sec)

mysql> project;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'project' at line 1
mysql> desc project;
+--------------+-------------+------+-----+---------+-------+
| Field        | Type        | Null | Key | Default | Extra |
+--------------+-------------+------+-----+---------+-------+
| projectid    | int         | NO   | PRI | NULL    |       |
| project_name | varchar(30) | YES  |     | NULL    |       |
| start_date   | date        | YES  |     | NULL    |       |
| incharge     | int         | YES  | MUL | NULL    |       |
+--------------+-------------+------+-----+---------+-------+
4 rows in set (0.00 sec)

mysql> desc employee;
+--------+-------------+------+-----+---------+-------+
| Field  | Type        | Null | Key | Default | Extra |
+--------+-------------+------+-----+---------+-------+
| empid  | int         | NO   | PRI | NULL    |       |
| name   | varchar(30) | YES  |     | NULL    |       |
| age    | int         | YES  |     | NULL    |       |
| salary | float       | YES  |     | NULL    |       |
+--------+-------------+------+-----+---------+-------+
4 rows in set (0.00 sec)

mysql> alter table project
    -> drop foreign key fk_emp ;
Query OK, 0 rows affected (0.03 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> desc project;
+--------------+-------------+------+-----+---------+-------+
| Field        | Type        | Null | Key | Default | Extra |
+--------------+-------------+------+-----+---------+-------+
| projectid    | int         | NO   | PRI | NULL    |       |
| project_name | varchar(30) | YES  |     | NULL    |       |
| start_date   | date        | YES  |     | NULL    |       |
| incharge     | int         | YES  | MUL | NULL    |       |
+--------------+-------------+------+-----+---------+-------+
4 rows in set (0.00 sec)

mysql> alter table project
    -> drop index fk_emp;
Query OK, 0 rows affected (0.02 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> desc project;
+--------------+-------------+------+-----+---------+-------+
| Field        | Type        | Null | Key | Default | Extra |
+--------------+-------------+------+-----+---------+-------+
| projectid    | int         | NO   | PRI | NULL    |       |
| project_name | varchar(30) | YES  |     | NULL    |       |
| start_date   | date        | YES  |     | NULL    |       |
| incharge     | int         | YES  |     | NULL    |       |
+--------------+-------------+------+-----+---------+-------+
4 rows in set (0.00 sec)

mysql> show create table project;
+---------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Table   | Create Table                                                                                                                                                                                                                                                    |
+---------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| project | CREATE TABLE `project` (
  `projectid` int NOT NULL,
  `project_name` varchar(30) DEFAULT NULL,
  `start_date` date DEFAULT NULL,
  `incharge` int DEFAULT NULL,
  PRIMARY KEY (`projectid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci |
+---------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
1 row in set (0.00 sec)

mysql> alter table project
    -> add constraint fk_emp foreign key (incharge) references employee (empid);
Query OK, 3 rows affected (0.15 sec)
Records: 3  Duplicates: 0  Warnings: 0

mysql> show tables;
+---------------+
| Tables_in_db1 |
+---------------+
| employee      |
| project       |
+---------------+
2 rows in set (0.00 sec)

mysql> select * from employee;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     1 | rahul  |   26 | 200000 |
|     2 | atul   | NULL |   NULL |
|     3 | aditya | NULL |  25000 |
|     4 | ruchi  |   26 |  15000 |
|     5 | sandip |   30 |  10000 |
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
6 rows in set (0.00 sec)

mysql> select * from employee where empid=3;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     3 | aditya | NULL |  25000 |
+-------+--------+------+--------+
1 row in set (0.00 sec)

mysql> select * from employee where age>27;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     5 | sandip |   30 |  10000 |
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
2 rows in set (0.00 sec)

mysql> select * from employee where age>27 and age<32;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     5 | sandip |   30 |  10000 |
+-------+--------+------+--------+
1 row in set (0.00 sec)

mysql> select * from employee where age<20 and age>30;
Empty set (0.00 sec)

mysql> select * from employee where age<20 or age>30;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
1 row in set (0.00 sec)

mysql> select * from employee where age != 26;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     5 | sandip |   30 |  10000 |
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
2 rows in set (0.01 sec)

mysql> alter table employee
    -> ;
Query OK, 0 rows affected (0.01 sec)

mysql> insert into employee
    -> ;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '' at line 1
mysql> INSERT INTO employees (name, age)
    -> VALUES ('Atul', 25);
ERROR 1146 (42S02): Table 'db1.employees' doesn't exist
mysql> update employee
    -> set age = 22,salary =50000 where name = 'atul';
Query OK, 1 row affected (0.02 sec)
Rows matched: 1  Changed: 1  Warnings: 0

mysql> select * from employee;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     1 | rahul  |   26 | 200000 |
|     2 | atul   |   22 |  50000 |
|     3 | aditya | NULL |  25000 |
|     4 | ruchi  |   26 |  15000 |
|     5 | sandip |   30 |  10000 |
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
6 rows in set (0.00 sec)

mysql> update employee
    -> set age = 36 where age is null;
Query OK, 1 row affected (0.01 sec)
Rows matched: 1  Changed: 1  Warnings: 0

mysql> select * from employee;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     1 | rahul  |   26 | 200000 |
|     2 | atul   |   22 |  50000 |
|     3 | aditya |   36 |  25000 |
|     4 | ruchi  |   26 |  15000 |
|     5 | sandip |   30 |  10000 |
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
6 rows in set (0.00 sec)

mysql> update employee
    -> set age = null, salary = null , name = null where id is 2;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '2' at line 2
mysql> set age = null, salary = null , name = null where id =2;
ERROR 1193 (HY000): Unknown system variable 'age'
mysql> update employee
    -> set age = null, salary = null , name = null where id = 2;
ERROR 1054 (42S22): Unknown column 'id' in 'where clause'
mysql> update employee
    -> set age = null, salary = null , name = null where empid = 2;
Query OK, 1 row affected (0.01 sec)
Rows matched: 1  Changed: 1  Warnings: 0

mysql> select * from employee ;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     1 | rahul  |   26 | 200000 |
|     2 | NULL   | NULL |   NULL |
|     3 | aditya |   36 |  25000 |
|     4 | ruchi  |   26 |  15000 |
|     5 | sandip |   30 |  10000 |
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
6 rows in set (0.00 sec)

mysql> update employee
    -> set name = 'atul',age =22,salary = 50000 where id = 2;
ERROR 1054 (42S22): Unknown column 'id' in 'where clause'
mysql> update employee
    -> set name = 'atul',age =22,salary = 50000 where empid = 2;
Query OK, 1 row affected (0.01 sec)
Rows matched: 1  Changed: 1  Warnings: 0

mysql> select * from employee ;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     1 | rahul  |   26 | 200000 |
|     2 | atul   |   22 |  50000 |
|     3 | aditya |   36 |  25000 |
|     4 | ruchi  |   26 |  15000 |
|     5 | sandip |   30 |  10000 |
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
6 rows in set (0.00 sec)

mysql> alter table employee
    -> ;
Query OK, 0 rows affected (0.01 sec)

mysql> select * from employee
    -> order by empid;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     1 | rahul  |   26 | 200000 |
|     2 | atul   |   22 |  50000 |
|     3 | aditya |   36 |  25000 |
|     4 | ruchi  |   26 |  15000 |
|     5 | sandip |   30 |  10000 |
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
6 rows in set (0.00 sec)

mysql> select * from employee
    -> order by salary;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     5 | sandip |   30 |  10000 |
|     4 | ruchi  |   26 |  15000 |
|     3 | aditya |   36 |  25000 |
|     2 | atul   |   22 |  50000 |
|    10 | shadid |   32 |  50000 |
|     1 | rahul  |   26 | 200000 |
+-------+--------+------+--------+
6 rows in set (0.00 sec)

mysql> select * from employee
    -> order by desc salary;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'desc salary' at line 2
mysql> select * from employee
    -> order by decs salary;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'salary' at line 2
mysql> select * from employee
    -> order by decs, salary;
ERROR 1054 (42S22): Unknown column 'decs' in 'order clause'
mysql> select * from employee
    -> order by desc, salary;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'desc, salary' at line 2
mysql> select * from employee;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     1 | rahul  |   26 | 200000 |
|     2 | atul   |   22 |  50000 |
|     3 | aditya |   36 |  25000 |
|     4 | ruchi  |   26 |  15000 |
|     5 | sandip |   30 |  10000 |
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
6 rows in set (0.00 sec)

mysql> update employee
    -> set id = 1 where name = 'atul';
ERROR 1054 (42S22): Unknown column 'id' in 'field list'
mysql> update employee
    -> set empid = 1 where name = 'atul';
ERROR 1062 (23000): Duplicate entry '1' for key 'employee.PRIMARY'
mysql> update employee
    -> set empid = 111 where empid = 1;
ERROR 1451 (23000): Cannot delete or update a parent row: a foreign key constraint fails (`db1`.`project`, CONSTRAINT `fk_emp` FOREIGN KEY (`incharge`) REFERENCES `employee` (`empid`))
mysql> update employee e join project p on p.incharge = e.empid
    -> set
    -> e.empid =111,p.incharge =111 where empid = 1;
ERROR 1451 (23000): Cannot delete or update a parent row: a foreign key constraint fails (`db1`.`project`, CONSTRAINT `fk_emp` FOREIGN KEY (`incharge`) REFERENCES `employee` (`empid`))
mysql> select * from employee;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     1 | rahul  |   26 | 200000 |
|     2 | atul   |   22 |  50000 |
|     3 | aditya |   36 |  25000 |
|     4 | ruchi  |   26 |  15000 |
|     5 | sandip |   30 |  10000 |
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
6 rows in set (0.00 sec)

mysql> select * from employee where salary between 27 and 32;
Empty set (0.01 sec)

mysql> select * from employee where salary between 27 and 32;
Empty set (0.00 sec)

mysql> select * from employee where salary between 20 and 30;
Empty set (0.00 sec)

mysql> select * from employee where salary between 20000 and 30000;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     3 | aditya |   36 |  25000 |
+-------+--------+------+--------+
1 row in set (0.00 sec)

mysql> select * from employee where age between 27 and 32;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     5 | sandip |   30 |  10000 |
|    10 | shadid |   32 |  50000 |
+-------+--------+------+--------+
2 rows in set (0.00 sec)

mysql> select * from employee where name like 'a%';
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     2 | atul   |   22 |  50000 |
|     3 | aditya |   36 |  25000 |
+-------+--------+------+--------+
2 rows in set (0.01 sec)

mysql> select * from employee where name in ('atul','nidhi');
+-------+------+------+--------+
| empid | name | age  | salary |
+-------+------+------+--------+
|     2 | atul |   22 |  50000 |
+-------+------+------+--------+
1 row in set (0.00 sec)

mysql> insert into employee
    -> values
    -> (6,'atul',23,60000),
    ->  (6,'atul',23,60000),
    ->  (6,'atul',23,60000),;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '' at line 5
mysql> insert into employee
    -> values
    -> (6,'atul',23,60000),
    ->  (7,'manish',53,51000),
    ->  (8,'prashant',18,10000),
    ->  (9,'golu',63,63000);
Query OK, 4 rows affected (0.01 sec)
Records: 4  Duplicates: 0  Warnings: 0

mysql> alter table employee
    -> add department int;
Query OK, 0 rows affected (0.24 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> show tables
    -> l
    -> ;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'l' at line 2
mysql> show tables;
+---------------+
| Tables_in_db1 |
+---------------+
| employee      |
| project       |
+---------------+
2 rows in set (0.04 sec)

mysql> desc employee;
+------------+-------------+------+-----+---------+-------+
| Field      | Type        | Null | Key | Default | Extra |
+------------+-------------+------+-----+---------+-------+
| empid      | int         | NO   | PRI | NULL    |       |
| name       | varchar(30) | YES  |     | NULL    |       |
| age        | int         | YES  |     | NULL    |       |
| salary     | float       | YES  |     | NULL    |       |
| department | int         | YES  |     | NULL    |       |
+------------+-------------+------+-----+---------+-------+
5 rows in set (0.01 sec)

mysql> alter table employee
    -> drop department ;
Query OK, 0 rows affected (0.03 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> desc table;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '' at line 1
mysql> desc employee;
+--------+-------------+------+-----+---------+-------+
| Field  | Type        | Null | Key | Default | Extra |
+--------+-------------+------+-----+---------+-------+
| empid  | int         | NO   | PRI | NULL    |       |
| name   | varchar(30) | YES  |     | NULL    |       |
| age    | int         | YES  |     | NULL    |       |
| salary | float       | YES  |     | NULL    |       |
+--------+-------------+------+-----+---------+-------+
4 rows in set (0.00 sec)

mysql> select * from employee;
+-------+----------+------+--------+
| empid | name     | age  | salary |
+-------+----------+------+--------+
|     1 | rahul    |   26 | 200000 |
|     2 | atul     |   22 |  50000 |
|     3 | aditya   |   36 |  25000 |
|     4 | ruchi    |   26 |  15000 |
|     5 | sandip   |   30 |  10000 |
|     6 | atul     |   23 |  60000 |
|     7 | manish   |   53 |  51000 |
|     8 | prashant |   18 |  10000 |
|     9 | golu     |   63 |  63000 |
|    10 | shadid   |   32 |  50000 |
+-------+----------+------+--------+
10 rows in set (0.01 sec)

mysql> alter table employee
    -> add department int ;
Query OK, 0 rows affected (0.04 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> insert into employee
    -> (department)
    -> values
    -> (1) where id=1;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'where id=1' at line 4
mysql> update employee
    -> set department = id;
ERROR 1054 (42S22): Unknown column 'id' in 'field list'
mysql> update employee
    -> set department = empid;
Query OK, 10 rows affected (0.02 sec)
Rows matched: 10  Changed: 10  Warnings: 0

mysql> select * from employee;
+-------+----------+------+--------+------------+
| empid | name     | age  | salary | department |
+-------+----------+------+--------+------------+
|     1 | rahul    |   26 | 200000 |          1 |
|     2 | atul     |   22 |  50000 |          2 |
|     3 | aditya   |   36 |  25000 |          3 |
|     4 | ruchi    |   26 |  15000 |          4 |
|     5 | sandip   |   30 |  10000 |          5 |
|     6 | atul     |   23 |  60000 |          6 |
|     7 | manish   |   53 |  51000 |          7 |
|     8 | prashant |   18 |  10000 |          8 |
|     9 | golu     |   63 |  63000 |          9 |
|    10 | shadid   |   32 |  50000 |         10 |
+-------+----------+------+--------+------------+
10 rows in set (0.00 sec)

mysql> update employee
    -> set department = 2 where empid = 1;
Query OK, 1 row affected (0.01 sec)
Rows matched: 1  Changed: 1  Warnings: 0

mysql> select * from employee;
+-------+----------+------+--------+------------+
| empid | name     | age  | salary | department |
+-------+----------+------+--------+------------+
|     1 | rahul    |   26 | 200000 |          2 |
|     2 | atul     |   22 |  50000 |          2 |
|     3 | aditya   |   36 |  25000 |          3 |
|     4 | ruchi    |   26 |  15000 |          4 |
|     5 | sandip   |   30 |  10000 |          5 |
|     6 | atul     |   23 |  60000 |          6 |
|     7 | manish   |   53 |  51000 |          7 |
|     8 | prashant |   18 |  10000 |          8 |
|     9 | golu     |   63 |  63000 |          9 |
|    10 | shadid   |   32 |  50000 |         10 |
+-------+----------+------+--------+------------+
10 rows in set (0.00 sec)

mysql> delete * from employee
    -> where id = 10;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '* from employee
where id = 10' at line 1
mysql> delete from employee where id = 10;
ERROR 1054 (42S22): Unknown column 'id' in 'where clause'
mysql> delete from employee where empid = 10;
Query OK, 1 row affected (0.01 sec)

mysql> select * from employee;
+-------+----------+------+--------+------------+
| empid | name     | age  | salary | department |
+-------+----------+------+--------+------------+
|     1 | rahul    |   26 | 200000 |          2 |
|     2 | atul     |   22 |  50000 |          2 |
|     3 | aditya   |   36 |  25000 |          3 |
|     4 | ruchi    |   26 |  15000 |          4 |
|     5 | sandip   |   30 |  10000 |          5 |
|     6 | atul     |   23 |  60000 |          6 |
|     7 | manish   |   53 |  51000 |          7 |
|     8 | prashant |   18 |  10000 |          8 |
|     9 | golu     |   63 |  63000 |          9 |
+-------+----------+------+--------+------------+
9 rows in set (0.00 sec)

mysql> select * from employee;
+-------+----------+------+--------+------------+
| empid | name     | age  | salary | department |
+-------+----------+------+--------+------------+
|     1 | rahul    |   26 | 200000 |          2 |
|     2 | atul     |   22 |  50000 |          2 |
|     3 | aditya   |   36 |  25000 |          3 |
|     4 | ruchi    |   26 |  15000 |          4 |
|     5 | sandip   |   30 |  10000 |          5 |
|     6 | atul     |   23 |  60000 |          6 |
|     7 | manish   |   53 |  51000 |          7 |
|     8 | prashant |   18 |  10000 |          8 |
|     9 | golu     |   63 |  63000 |          9 |
+-------+----------+------+--------+------------+
9 rows in set (0.00 sec)

mysql> rollback;
Query OK, 0 rows affected (0.00 sec)

mysql> select * from employee;
+-------+----------+------+--------+------------+
| empid | name     | age  | salary | department |
+-------+----------+------+--------+------------+
|     1 | rahul    |   26 | 200000 |          2 |
|     2 | atul     |   22 |  50000 |          2 |
|     3 | aditya   |   36 |  25000 |          3 |
|     4 | ruchi    |   26 |  15000 |          4 |
|     5 | sandip   |   30 |  10000 |          5 |
|     6 | atul     |   23 |  60000 |          6 |
|     7 | manish   |   53 |  51000 |          7 |
|     8 | prashant |   18 |  10000 |          8 |
|     9 | golu     |   63 |  63000 |          9 |
+-------+----------+------+--------+------------+
9 rows in set (0.00 sec)

mysql> start transaction ;
Query OK, 0 rows affected (0.00 sec)

mysql> delete from employee
    -> where id = 9;
ERROR 1054 (42S22): Unknown column 'id' in 'where clause'
mysql> delete from employee
    -> where empid = 9;
Query OK, 1 row affected (0.01 sec)

mysql> select * from employee;
+-------+----------+------+--------+------------+
| empid | name     | age  | salary | department |
+-------+----------+------+--------+------------+
|     1 | rahul    |   26 | 200000 |          2 |
|     2 | atul     |   22 |  50000 |          2 |
|     3 | aditya   |   36 |  25000 |          3 |
|     4 | ruchi    |   26 |  15000 |          4 |
|     5 | sandip   |   30 |  10000 |          5 |
|     6 | atul     |   23 |  60000 |          6 |
|     7 | manish   |   53 |  51000 |          7 |
|     8 | prashant |   18 |  10000 |          8 |
+-------+----------+------+--------+------------+
8 rows in set (0.00 sec)

mysql> rollback;
Query OK, 0 rows affected (0.01 sec)

mysql> select * from employee;
+-------+----------+------+--------+------------+
| empid | name     | age  | salary | department |
+-------+----------+------+--------+------------+
|     1 | rahul    |   26 | 200000 |          2 |
|     2 | atul     |   22 |  50000 |          2 |
|     3 | aditya   |   36 |  25000 |          3 |
|     4 | ruchi    |   26 |  15000 |          4 |
|     5 | sandip   |   30 |  10000 |          5 |
|     6 | atul     |   23 |  60000 |          6 |
|     7 | manish   |   53 |  51000 |          7 |
|     8 | prashant |   18 |  10000 |          8 |
|     9 | golu     |   63 |  63000 |          9 |
+-------+----------+------+--------+------------+
9 rows in set (0.00 sec)

mysql> select * from books;
ERROR 1146 (42S02): Table 'db1.books' doesn't exist
mysql> select * from book;
ERROR 1146 (42S02): Table 'db1.book' doesn't exist
mysql> alter table employee
    -> drop department ;
Query OK, 0 rows affected (0.04 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> select * from employee;
+-------+----------+------+--------+
| empid | name     | age  | salary |
+-------+----------+------+--------+
|     1 | rahul    |   26 | 200000 |
|     2 | atul     |   22 |  50000 |
|     3 | aditya   |   36 |  25000 |
|     4 | ruchi    |   26 |  15000 |
|     5 | sandip   |   30 |  10000 |
|     6 | atul     |   23 |  60000 |
|     7 | manish   |   53 |  51000 |
|     8 | prashant |   18 |  10000 |
|     9 | golu     |   63 |  63000 |
+-------+----------+------+--------+
9 rows in set (0.00 sec)

mysql> select * from employee where age<30;
+-------+----------+------+--------+
| empid | name     | age  | salary |
+-------+----------+------+--------+
|     1 | rahul    |   26 | 200000 |
|     2 | atul     |   22 |  50000 |
|     4 | ruchi    |   26 |  15000 |
|     6 | atul     |   23 |  60000 |
|     8 | prashant |   18 |  10000 |
+-------+----------+------+--------+
5 rows in set (0.00 sec)

mysql> select * from employee where age>30;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     3 | aditya |   36 |  25000 |
|     7 | manish |   53 |  51000 |
|     9 | golu   |   63 |  63000 |
+-------+--------+------+--------+
3 rows in set (0.00 sec)

mysql> select * from employee where salary between 18000 to 25000;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'to 25000' at line 1
mysql> select * from employee where salary between 18000 and 25000;
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     3 | aditya |   36 |  25000 |
+-------+--------+------+--------+
1 row in set (0.00 sec)

mysql> select * from employee where name like '%h';
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     7 | manish |   53 |  51000 |
+-------+--------+------+--------+
1 row in set (0.01 sec)

mysql> select * from employee where name= 'sandeep' or 'ruchi';
Empty set, 1 warning (0.01 sec)

mysql> select * from employee where name in ("sandeep","ruchi");
+-------+-------+------+--------+
| empid | name  | age  | salary |
+-------+-------+------+--------+
|     4 | ruchi |   26 |  15000 |
+-------+-------+------+--------+
1 row in set (0.00 sec)

mysql> select * from employee;
+-------+----------+------+--------+
| empid | name     | age  | salary |
+-------+----------+------+--------+
|     1 | rahul    |   26 | 200000 |
|     2 | atul     |   22 |  50000 |
|     3 | aditya   |   36 |  25000 |
|     4 | ruchi    |   26 |  15000 |
|     5 | sandip   |   30 |  10000 |
|     6 | atul     |   23 |  60000 |
|     7 | manish   |   53 |  51000 |
|     8 | prashant |   18 |  10000 |
|     9 | golu     |   63 |  63000 |
+-------+----------+------+--------+
9 rows in set (0.00 sec)

mysql> select * from employee where name in ("sandip","ruchi");
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     4 | ruchi  |   26 |  15000 |
|     5 | sandip |   30 |  10000 |
+-------+--------+------+--------+
2 rows in set (0.00 sec)

mysql> select * from employee where name = 'sandip' or  name = 'ruchi'or name = 'aditya';
+-------+--------+------+--------+
| empid | name   | age  | salary |
+-------+--------+------+--------+
|     3 | aditya |   36 |  25000 |
|     4 | ruchi  |   26 |  15000 |
|     5 | sandip |   30 |  10000 |
+-------+--------+------+--------+
3 rows in set (0.00 sec)

mysql> mkdir "e:\redmi note 9 chavan"
    -> ;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'mkdir "e:\redmi note 9 chavan"' at line 1
mysql> select * from employee
    -> ;
+-------+----------+------+--------+
| empid | name     | age  | salary |
+-------+----------+------+--------+
|     1 | rahul    |   26 | 200000 |
|     2 | atul     |   22 |  50000 |
|     3 | aditya   |   36 |  25000 |
|     4 | ruchi    |   26 |  15000 |
|     5 | sandip   |   30 |  10000 |
|     6 | atul     |   23 |  60000 |
|     7 | manish   |   53 |  51000 |
|     8 | prashant |   18 |  10000 |
|     9 | golu     |   63 |  63000 |
+-------+----------+------+--------+
9 rows in set (0.00 sec)

mysql> of transaction;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'of transaction' at line 1
mysql> strat transaction;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'strat transaction' at line 1
mysql> off transaction;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'off transaction' at line 1
mysql> select * from employee order by age;
+-------+----------+------+--------+
| empid | name     | age  | salary |
+-------+----------+------+--------+
|     8 | prashant |   18 |  10000 |
|     2 | atul     |   22 |  50000 |
|     6 | atul     |   23 |  60000 |
|     1 | rahul    |   26 | 200000 |
|     4 | ruchi    |   26 |  15000 |
|     5 | sandip   |   30 |  10000 |
|     3 | aditya   |   36 |  25000 |
|     7 | manish   |   53 |  51000 |
|     9 | golu     |   63 |  63000 |
+-------+----------+------+--------+
9 rows in set (0.00 sec)

mysql> select * from employee
    -> order by salary
    -> ;
+-------+----------+------+--------+
| empid | name     | age  | salary |
+-------+----------+------+--------+
|     5 | sandip   |   30 |  10000 |
|     8 | prashant |   18 |  10000 |
|     4 | ruchi    |   26 |  15000 |
|     3 | aditya   |   36 |  25000 |
|     2 | atul     |   22 |  50000 |
|     7 | manish   |   53 |  51000 |
|     6 | atul     |   23 |  60000 |
|     9 | golu     |   63 |  63000 |
|     1 | rahul    |   26 | 200000 |
+-------+----------+------+--------+
9 rows in set (0.00 sec)

mysql> select * from employee
    -> order by age,salary;
+-------+----------+------+--------+
| empid | name     | age  | salary |
+-------+----------+------+--------+
|     8 | prashant |   18 |  10000 |
|     2 | atul     |   22 |  50000 |
|     6 | atul     |   23 |  60000 |
|     4 | ruchi    |   26 |  15000 |
|     1 | rahul    |   26 | 200000 |
|     5 | sandip   |   30 |  10000 |
|     3 | aditya   |   36 |  25000 |
|     7 | manish   |   53 |  51000 |
|     9 | golu     |   63 |  63000 |
+-------+----------+------+--------+
9 rows in set (0.00 sec)

mysql> order by age,salary desc;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'order by age,salary desc' at line 1
mysql> select * from employee
    -> order by age,salary desc;
+-------+----------+------+--------+
| empid | name     | age  | salary |
+-------+----------+------+--------+
|     8 | prashant |   18 |  10000 |
|     2 | atul     |   22 |  50000 |
|     6 | atul     |   23 |  60000 |
|     1 | rahul    |   26 | 200000 |
|     4 | ruchi    |   26 |  15000 |
|     5 | sandip   |   30 |  10000 |
|     3 | aditya   |   36 |  25000 |
|     7 | manish   |   53 |  51000 |
|     9 | golu     |   63 |  63000 |
+-------+----------+------+--------+
9 rows in set (0.00 sec)

mysql> select min(age) from employee
    -> ;
+----------+
| min(age) |
+----------+
|       18 |
+----------+
1 row in set (0.01 sec)

mysql> select min(age) 'age'  max(age) 'maximum' from employee
    -> ;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'max(age) 'maximum' from employee' at line 1
mysql> select min(age) age,  max(age) maximum from employee;
+------+---------+
| age  | maximum |
+------+---------+
|   18 |      63 |
+------+---------+
1 row in set (0.00 sec)

mysql> select count(*) from employee
    -> ;
+----------+
| count(*) |
+----------+
|        9 |
+----------+
1 row in set (0.03 sec)

mysql>