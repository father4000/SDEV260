--Database creation code.

--budget table
CREATE TABLE IF NOT EXIST budget(
	budget_id integer PRIMARY KEY,
	budget_name varchar(30) NOT NULL,
	total numeric(6,3) NOT NULL DEFUALT 0
);

--item table
CREATE TABLE IF NOT EXIST item(
	item_id integer PRIMARY KEY,
	item_name varchar(30) NOT NULL,
	limit numeric(6,3) NOT NULL DEFUALT 0,
	total numeric(6,3) NOT NULL DEFUALT 0
);

--category table
CREATE TABLE IF NOT EXIST category(
	cat_name varchar(30) PRIMARY KEY,
	total numeric(6,3) NOT NULL DEFUALT 0,
	budget_id integer NOT NULL REFERENCES budget(budget_id)
);

--savings table
CREATE TABLE IF NOT EXIST saving(
	sav_id integer PRIMARY KEY,
	sav_name varchar(30) NOT NULL,
	goal numeric(6,3) NOT NULL DEFUALT 0,
	total numeric(6,3) NOT NULL DEFUALT 0
);

--transaction table
CREATE TABLE IF NOT EXIST transactions(
	trans_id integer PRIMARY KEY,
	total numeric NOT NULL,
	item_id integer REFERENCES item(item_id), 
	sav_id integer REFERENCES saving(sav_id),
	cat_name varchar(30) REFERENCES category(cat_name)
);