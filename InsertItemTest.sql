--Test for item table

INSERT INTO item (item_name, cap, total, budget_id) VALUES('Test Item', 100, 0, 1);

SELECT * FROM item;

DELETE FROM item WHERE item_name LIKE 'Test Item';