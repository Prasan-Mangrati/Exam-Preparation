
### SQL Solutions
-- Simple Format for creating database
-- 1. Create database dbName;
-- 2. use dbName;
-- 3. Create table tbName (heading dataType,....);
-- 4. Insert into tbName values (), ();
-- 5. select * from tbName;

-- Create a database called School and table 
-- named students and store name, class, age, rollno 
-- and gender of 5 students give a primary key also and none of the value should 
-- be empty or null
create database school;
use school;

create table students (
	fname varchar(25) not null,
    gender varchar(1) not null,
    class int not null,
    age int not null,
    rollno int primary key not null
);

insert into students values  
-- fname   gen  cl  age rollno
("prasan", "m",null, 19, 21), 
("a","f",12,1,1),
("B",'m',13,2,2);

select * from students;
-- display name and rollno of students
select fname, rollno from students;

-- Display all the students whose rollno is less than 5
select * from students where rollno < 5;

-- Display all the students whose gender is male
select * from students where gender='m';

-- Display all the students whose rollno is less than 5 and gender is male
select * from students where rollno<5 and gender='m';


-- Display only name rollno and gender fields
select fname,rollno,gender from students;

-- Display only name rollno and gender fields of the students whose class is 12
select fname,rollno,gender from students where class=12;