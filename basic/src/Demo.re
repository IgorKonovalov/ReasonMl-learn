type person = {age: int, name: string};
type monster = {age: int, hasTentacles: bool};

let getAge = (entity: person) => entity.age;

let me = {
  age: 33,
  name: "Igor" 
}

let monster = {
  age: 999,
  hasTentacles: true
}

let monsterAge = getAge(me)
