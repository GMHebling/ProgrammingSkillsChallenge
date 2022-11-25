CREATE TABLE Students (
	ID int,
	Name varchar(255),
	Value int
	);


CREATE TABLE Notes (
	Grade int,
	Min_value int,
	Max_value int
);

INSERT into Notes
Values (1, 0, 9), (2, 10, 19), (3, 20, 29), (4, 30, 39), (5, 40, 49), (6, 50, 59), (7, 60, 69), (8, 70, 79), (9, 80, 89), (10, 90, 99);

INSERT into Students
values (1, "Julia", 81), (2, "Carol", 68), (3, "Maria", 99), (4, "Andreia", 78), (5, "Jaqueline", 63), (6, "Marcela", 88);

SELECT 
CASE 
  	when grade < 8 THEN "NULL"
    Else Name
    END as Name, grade, value as Value
from Students JOIN Notes	
WHERE Students.value BETWEEN Notes.Min_value AND Notes.max_value
oRDER by Value DESC