--Create a Full Table
CREATE TABLE IF NOT EXISTS second_table(
	id INT,
	name VARCHAR(256),
	score INT
);
INSERT INTO second_table (
	(id, name, score) VALUES (1, "John", 10),
	(id, name, score) VALUES (2, "Alex", 3),
	(id, name, score) VALUES (3, "Bob", 14),
	(id, name, score) Values (4, "George", 8)
);
