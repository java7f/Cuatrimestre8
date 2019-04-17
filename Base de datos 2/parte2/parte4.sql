CREATE LOGIN ventasLogin WITH PASSWORD = ' B@ck#db10k'
GO
Use VENTASRANCHERAS2018_3;
GO

IF NOT EXISTS (SELECT * FROM sys.database_principals WHERE name = N'backup_user')
BEGIN
    CREATE USER backup_user FOR LOGIN ventasLogin
    EXEC sp_addrolemember N'JAVA/javie', N'backup_user'
    EXEC master..sp_addsrvrolemember @loginame = N'ventasLogin', @rolename = N'sysadmin'
END;
GO