# Task : Implement an Aggregation Relationship

## Objective

Create two classes, `University` and `Department`, to establish an aggregation relationship where a university contains multiple departments.

## Requirements

### University Class

1. **Attributes**:
    - `name` (string): The name of the university.
    - `departments` (list of `Department` objects): A list containing the departments within the university.

2. **Methods**:
    - Constructor to initialize the university name.
    - Method to add a department to the university.
    - Method to display the list of departments along with their details.

### Department Class

1. **Attributes**:
    - `departmentName` (string): The name of the department.
    - `location` (string): The location of the department.
    - `headOfDepartment` (string): The head of the department.

2. **Methods**:
    - Constructor to initialize the department name, location, and head of the department.
    - Getter and setter methods for each attribute.

### Aggregation

1. **Containment**:
    - The `University` class contains a list of `Department` objects.
    - Implement a method in the `University` class to add a `Department` to the list.
    - Implement a method in the `University` class to display the list of departments with their details.

### Implementation Details

- Use a collection (e.g., vector or list) in the `University` class to store the list of departments.
- Ensure proper encapsulation and data validation.
- Include comments to explain the purpose and functionality of each section.

### Knowledge requirements
- Aggregation Relationship