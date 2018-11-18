/* records and types*/

/* always define type of record before actual record creation */
type person = {
  age: int,
  name: string,
  mutable occupation: string,
}

/* record can be a part of another */
type dataPerson = {
  person,
  id: int
}
/* compiled to an array with array index accesses instead of JS object  */
let igor = {
  age: 33,
  name: "Igor",
  occupation: "Programmer"
}

/* mutable fields can be mutated (see person type definition above) */
igor.occupation = "Tourist guide"

let igorRecord = {
  person: igor,
  id: 1
}

let sasha = {
  age: 31,
  name: "Sasha",
  occupation: "Kinda Programmer"
}
/* can destruct other records into a new ones */
let igorNextYear = {
  ...igor,
  age: igor.age + 1,
}

/* look, here is a function for strings concatenation and destructuring wow */
let sayName = ({ name, age }) => {j|$name is a $age years old|j}


let greeting = sayName(sasha)

Js.log(greeting)


type otherPerson = {age: int, name: string};
type monster = {age: int, hasTentacles: bool};

/* getAge will be expecting entity to be a monster type, as it's the last and closest type */
let getAge = (entity) => entity.age;
