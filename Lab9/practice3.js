function validate() {
    var password1 = document.getElementById("pass1").value;
    var password2 = document.getElementById("pass2").value;

    if(password1.length < 8){
        alert("The password length is too short to be valid!");
        return false;
    }
    else if(password2.length < 8){
        alert("Please match the length of this to the first password!");
        return false;
    }
    else if (password1 != password2){
        alert("The Passwords are not the same!");
        return false;
    }
    else{
        alert("Valid Passwords and checked!");
        return true;
    }
}