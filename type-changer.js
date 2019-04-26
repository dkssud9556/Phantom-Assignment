const scanf = require('scanf');
console.log('입력');
let input = scanf('%s');

console.log(`입력값 : ${input}`);
console.log(`${input}를 무슨 타입으로 바꿀까요?`);
console.log('array 또는 number 또는 boolean 또는 null 또는 undefined');
let input2 = scanf('%s');

if(input2 === 'array') {
    input = String(input);
    console.log(`값 : ${input}, 타입 : ${typeof input}`);
}
else if(input2 === 'number')
{
    input = Number(input);
    if(isNaN(input))
    {
        console.log('숫자 변환이 되지 않습니다.');
    }
    else
    {
        input = Number(input);
        console.log(`값 : ${input}, 타입 : ${typeof input}`);
    }
}
else if(input2 === 'boolean')
{
    if(isNaN(+input) == 0)
    {
        input = +input;
    }
    if(input === 'false') input = false;
    if(input === 'true') input = true;
    if(input === 'null') input = null;
    input = Boolean(input);
    console.log(`값 : ${input}, 타입 : ${typeof input}`);
}
else if(input2 === 'null')
{
    input = null;
    console.log(`값 : ${input}, 타입 : ${typeof input}`);
}
else if(input2 === 'undefined')
{
    input = undefined;
    console.log(`값 : ${input}, 타입 : ${typeof input}`);
}