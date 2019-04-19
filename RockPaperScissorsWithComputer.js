var scanf = require('scanf');
let check = 1;
while(check) {
    console.log('가위 바위 보자기');
    let challenger = scanf('%s');
    let computer = Math.floor(Math.random() * 3) + 1;
    if(computer === 1) computer = '가위';
    else if(computer === 2) computer = '바위';
    else if(computer === 3) computer = '보자기';
    if(challenger === computer) {
        console.log('컴퓨터도 같은 걸 냈어요');
        console.log('무승부');
        console.log('다시 할거면 1, 안할거면 0');
        check = scanf('%d');
        continue;
    }
    else if(challenger === '가위') {
        if(computer === '바위') {
            console.log('컴퓨터는 바위를 냈습니다.');
            console.log('컴퓨터 승');
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
        else if(computer === '보자기') {
            console.log('컴퓨터는 보자기를 냈습니다.');
            console.log('도전자 승');
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
    }
    else if(challenger === '바위') {
        if(computer === '가위') {
            console.log('컴퓨터는 가위를 냈습니다.');
            console.log('도전자 승');
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
        else if(computer === '보자기') {
            console.log('컴퓨터는 보자기를 냈습니다.');
            console.log('컴퓨터 승')
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
    }
    else if(challenger === '보자기') {
        if(computer === '가위') {
            console.log('컴퓨터는 가위를 냈습니다.');
            console.log('컴퓨터 승');
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
        else if(computer === '바위') {
            console.log('컴퓨터는 바위를 냈습니다.');
            console.log('도전자 승');
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
    }
}