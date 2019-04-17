CREATE DATABASE parte3
ON PRIMARY
(NAME='DBForPartitioning_1',
FILENAME=
'C:\Ventas2018_2\DBForPartitioning_1.mdf',
SIZE=2,
MAXSIZE=100,
FILEGROWTH=1 ),
FILEGROUP FG2
(NAME = 'DBForPartitioning_2',
FILENAME =
'C:\Ventas2018_2\DBForPartitioning_2.ndf',
SIZE = 2,
MAXSIZE=100,
FILEGROWTH=1 )

SELECT name as [File Group Name]
FROM sys.filegroups
WHERE type = 'FG'

SELECT name as [DB File Name],physical_name as [DB File Path]
FROM sys.database_files
where type_desc = 'ROWS'

CREATE PARTITION FUNCTION age (int)
AS RANGE RIGHT FOR VALUES ( 20)

CREATE PARTITION SCHEME Test_PartitionScheme
AS PARTITION age
TO ([PRIMARY], FG2)

create table userData2(
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
)ON Test_PartitionScheme(DATEDIFF(year, convert(date, sysdatetime()), fecha_nac));
	
