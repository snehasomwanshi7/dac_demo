function postComment() {
    let userCmt = document.querySelector('#user-comment').value;
    //document.write(userCmt);
    let new_cmt = document.querySelector('.ref-box').cloneNode(true);
    new_cmt.innerHTML = "NEW";
    let cmtSec = document.getElementById('user-cmt');
    cmtSec.appendChild(new_cmt);
}