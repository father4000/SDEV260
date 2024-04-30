
INSERT INTO transactions (total, item_id, sav_id, cat_name) VALUES(20, 1, NULL, NULL);

SELECT * FROM transactions;

DELETE FROM transactions WHERE item_id = 1;