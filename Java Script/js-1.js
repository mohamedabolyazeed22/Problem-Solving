function showUserName()
{
    const userName = prompt('Please Enter your username');
    if (userName)
        {
            return userName.trim();
        }else if (userName == ""){
            showUserName();
        }else{
            return null;
        }
}

console.log(showUserName());