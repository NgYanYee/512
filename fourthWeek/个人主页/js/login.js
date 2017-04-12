	function submitCheck(){
			var username=document.getElementById("username").value;
			var password=document.getElementById("password").value;
			if(password.length==0){
				alert("请输入密码");
				return false;
			}
			if(password.length<8) {
				alert("密码长度不能小于8");
				return false;
			} 
 			if(username=="1151899508"&&password=="12345678") {
				return true;
			} else {
				alert("请输入正确的账号和密码");
				return false;
			}

		}