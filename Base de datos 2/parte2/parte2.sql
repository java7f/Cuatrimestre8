CREATE DATABASE users;

create table userData(
	id int unique,
	firstName varchar(255),
	lastName varchar(255),
	sndLastName varchar(255),
	birth date,
	registerDate date,
	docType varchar(255),
	docId varchar(255),
	gender varchar(16),
	maritalStatus varchar(64),
	constraint a check (DATEDIFF(year, convert(date,sysdatetime()), birth) > 17)
)

