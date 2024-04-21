--Test data for budget table insertion.

INSERT INTO budget (budget_name, total) VALUES('Test Budget', 100);

SELECT * FROM budget;

DELETE FROM budget WHERE budget_name like 'Test Budget';