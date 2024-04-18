select name,bonus 
from employee e
left join bonus b
on e.empId = b.empId
where b.bonus < 1000 or b.bonus is null;


# SELECT Employee.name,Bonus.bonus FROM Employee 
# LEFT JOIN Bonus ON Employee.empID = Bonus.empID
# WHERE bonus < 1000 OR Bonus IS NULL ;
