# File I/O

File I/O is where C++ programs meet the outside world. Streams are safer than
manual C-style buffer handling for most learning and application-level tasks.

## Mental Model

- `std::ofstream` writes to files.
- `std::ifstream` reads from files.
- Always check whether opening the file succeeded.
- Store records in a simple format before inventing a parser.
- Keep parsing separate from business logic.

## Example

- `file_stream_records.cpp`: writes text records and reads them back.
