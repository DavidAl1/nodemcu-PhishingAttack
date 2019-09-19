const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Access</title>
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
        <style>
			@import url('https://fonts.googleapis.com/css?family=Raleway');
			body {
			    margin: 0;
			    padding: 0;
			    font-family: 'Raleway', sans-serif;
			    color: #F2F2F2;
			    background-color: #303641;
			}

			#container-register {
			    background-color: #1D1F20;
			    position: relative;
			    top: 20%;
			    margin: auto;
			    width: 340px;
			    height: 480px;
			    border-radius: 0.35em;
			    box-shadow: 0 3px 10px 0 rgba(0, 0, 0, 0.2);
			    text-align: center;
			}

			#title {
			    position: relative;
			    background-color: #1A1C1D;
			    width: 100%;
			    margin-top: 40%;
			    padding: 20px 0px;
			    border-radius: 0.35em;
			    font-size: 22px;
			    border-bottom: 1px solid rgba(255, 255, 255, 0.05);
			}

			.lock {
				position: relative;
				top: 2px;
			}

			.input {
			    margin: auto;
			    width: 240px;
			    border-radius: 4px;
			    background-color: #373b3d;
			    padding: 8px 0px;
			    margin-top: 15px;
			}

			.input-addon {
			    float: left;
			    background-color: #373b3d;
			    border: 1px solid #373b3d;
			    padding: 4px 8px;
			    border-right: 1px solid rgba(255, 255, 255, 0.05);
			}

			input[type=checkbox] {
			    cursor: pointer;
			}

			input[type=text] {
			    color: #949494;
			    margin: 0;
			    background-color: #373b3d;
			    border: 1px solid #373b3d;
			    padding: 6px 0px;
			    border-radius: 3px;
			}

			input[type=text]:focus {
			    border: 1px solid #373b3d;
			}

			input[type=password] {
			    color: #949494;
			    margin: 0;
			    background-color: #373b3d;
			    border: 1px solid #373b3d;
			    padding: 6px 0px;
			    border-radius: 3px;
			}

			input[type=password]:focus {
			    border: 1px solid #373b3d;
			}

			input[type=email] {
			    color: #949494;
			    margin: 0;
			    background-color: #373b3d;
			    border: 1px solid #373b3d;
			    padding: 6px 0px;
			    border-radius: 3px;
			}

			input[type=email]:focus {
			    border: 1px solid #373b3d;
			}

			*:focus {
			    outline: none;
			}

			.remember-me {
			    margin: 10px 0;
			}

			input[type=submit] {
			    padding: 6px 25px;
			    background: #373E4A;
			    color: #C1C3C6;
			    font-weight: bold;
			    border: 0 none;
			    cursor: pointer;
			    border-radius: 3px;
			}

			.register {
			    margin: auto;
			    padding: 16px 0;
			    text-align: center;
			    margin-top: 40px;
			    width: 85%;
			    border-top: 1px solid #C1C3C6;
			}

			.clearfix {
			    clear: both;
			}

			.btn {
			  width: 100%;
			  padding: 12px;
			  border: none;
			  border-radius: 4px;
			  margin: 5px 0;
			  opacity: 0.85;
			  display: inline-block;
			  font-size: 17px;
			  line-height: 20px;
			  text-decoration: none; /* remove underline from anchors */
			}

			.fb {
			  background-color: #3B5998;
			  color: white;
			}

			.twitter {
			  background-color: #55ACEE;
			  color: white;
			}

			/* Two-column layout */
			.col {
			  float: left;
			  width: 50%;
			  margin: auto;
			  padding: 0 50px;
			  margin-top: 6px;
			}

			/* Clear floats after the columns */
			.row:after {
			  content: "";
			  display: table;
			  clear: both;
			}

			/* vertical line */
			.vl {
			  position: absolute;
			  left: 50%;
			  transform: translate(-50%);
			  border: 2px solid #ddd;
			  height: 175px;
			}

			/* text inside the vertical line */
			.vl-innertext {
			  position: absolute;
			  top: 50%;
			  transform: translate(-50%, -50%);
			  background-color: #f1f1f1;
			  border: 1px solid #ccc;
			  border-radius: 50%;
			  padding: 8px 10px;
			}

			/* hide some text on medium and large screens */
			.hide-md-lg {
			  display: none;
			}

        </style>
    </head>
    <body>
        <div id="container-register">
            <div id="title">
                <i class="material-icons lock">lock</i> Access
            </div>

            <form action="/action_page" method="post">
                <div class="input">
                    <div class="input-addon">
                        <i class="material-icons">email</i>
                    </div>
                    <input id="email" placeholder="Email" type="email" required class="validate" autocomplete="off" name="mail">
                </div>

                <div class="clearfix"></div>

                <div class="input">
                    <div class="input-addon">
                        <i class="material-icons">vpn_key</i>
                    </div>
                    <input id="password" placeholder="Password" type="password" required class="validate" autocomplete="off" name="password">
                </div>

                <div class="remember-me">
                    <input type="checkbox">
                    <span style="color: #DDD">I accept Terms of Service</span>
                </div>

                <br>

                <input type="submit" value="Login" />
            </form>

            <div class="register">
                <div class="col">
                    <a href="./Facebook_Login.html" class="fb btn">
                        <i class="fa fa-facebook fa-fw"></i> Login with Facebook
                    </a>
                    <a href="./Twitter_Login.html" class="twitter btn">
                        <i class="fa fa-twitter fa-fw"></i> Login with Twitter
                    </a>
                </div>
            </div>
        </div>
    </body>
</html>
)=====";