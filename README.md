# Phantom-Assignment

### 마크다운 사용법
- "#" ~ "######" : 제목으로 쓸 말 앞에 써주면 글씨가 굵고 크게 나온다.(#이 적을수록 크다.)
- ">" : 인용문을 적을 때 사용된다.
> 인용문
- 순서있는 목록 : 숫자와 점을 이용한다.(숫자를 어떤 순서로 적어도 내림차순이 된다.)
    1. Github
    2. 깃허브
    3. END
- 순서없는 목록 : - 또는 * 또는 +를 이용한다.(어떤걸 사용해도 똑같음)
    - Github
    * 깃허브
    + END
- 수평선 : ---같이 수평선을 만든다.(* * *, ***, *****, - - -)
***
* * *
*****
- - -
- 링크
    1. 참조링크
  [link][link1]
  [link1]: https://github.com/dkssud9556/How-To-Use-Markdown/blob/master/README.md "Go here"
    2. 인라인 링크
  syntax: [link](https://github.com/dkssud9556/How-To-Use-Markdown/blob/master/README.md)>
    3. 자동연결
  <http://example.com/>
  <address@example.com>
- 강조(양쪽에 "*, _"를 붙이면 기울임, "**, __"를 붙이면 굵어짐, "~~"를 붙이면 취소선)
    + 기울임 : *글*, _글_
    + 굶어짐 : **글**, __글__
    + 취소선 : ~~글~~
  
- 이미지
    - ![Alt text](./first.jpg)
      ![Alt text](./watch.jpg "Watchsmallclock")
   
### Git 명령어
- 작업의 흐름
 1. 작업 디렉토리(Working directory) : 실제 파일들로 이루어짐.
 2. 인덱스(Index) : 준비 영역의 역할을 함.
 3. HEAD : 최종 확정본(commit)을 나타냄.
 
1. 새로운 저장소 만들기
 - git init : 새로운 git 저장소 만들기.
2. 저장소 
 - git clone /로컬/저장소/경로 : 로컬 저장소 복제(내 깃 레포지토리 주소)
 - git clone 사용자명@호스트:/원격/저장소/경로 : 원격 서버 저장소 복제.
3. 추가와 확정
 - git add <파일 이름> : 변경된 파일을 (인덱스에) 추가함.
 - git commit -m "이번 확정본에 대한 설명" : 변경 내용을 확정.(변경된 파일이 HEAD에 반영됨.)
4. 변경 내용 발행(push)하기
 - git push origin master : 변경 내용을 원격 서버로 올림.
 - git remote add origin <원격 서버 주소> : 기존에 있던 원격 저장소를 복제하지 않았을 때, 원격 서버의 주소를 git에게 알려줌.
5. git 상태 확인
 - git status
