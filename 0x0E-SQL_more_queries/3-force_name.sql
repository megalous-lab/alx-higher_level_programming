-- Creates a table with a constraint on a column
-- to not be null
CREATE TABLE IF NOT EXISTS force_name(
    id INT,
    name VARCHAR(256) NOT NULL
);
