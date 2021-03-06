#ifndef INDEX_PAGE_H
#define INDEX_PAGE_H
const char *index_page="<!DOCTYPE html>"
"<html lang=\"en\" dir=\"ltr\">"
"<head>"
"<meta charset=\"utf-8\">"
"<title>Remote Control System</title>"
"<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css\">"
"<link href=\"https://fonts.googleapis.com/css2?family=Inconsolata&display=swap\" rel=\"stylesheet\">"
"<script src=\"https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js\"></script>"
"<style>"
".btn btn-primary btn-lg btn-block{"
"margin:auto;"
"display:block;"
"}"
""
".main_table{"
"width: 27%;"
"border-collapse: separate;"
"border-spacing: 15px;"
"background-color:#cce6ff;"
"border-radius: 25px;"
"}"
""
".btn-circle{"
"margin: auto;"
"display: block;"
"width: 50px;"
"height: 50px;"
"padding: 7px 10px;"
"border-radius: 25px;"
"font-size: 25px;"
"text-align: center;"
"}"
""
"td{"
"height: 100px;"
"}"
""
".insolata_font{"
"font-family: 'Inconsolata', monospace;"
"}"
""
"body{"
"background-color: #e6ffff;"
"}"
""
"</style>"
"<script type=\"text/javascript\">"
"var http = new XMLHttpRequest();"
"var url;"
"function openWeatherMap(){"
"if(url)"
"http.open(\"GET\",url, true);"
"http.send();"
"http.onreadystatechange = function(){"
"if(http.readyState == 4 && http.status == 200){"
"weatherArea = document.getElementById(\"weatherArea\");"
"var weatherObj = JSON.parse(http.responseText);"
"var desc = weatherObj.weather[0].description;"
"weatherArea.innerHTML = \"\";"
"weatherArea.innerHTML= \"<h2>\" + weatherEmoji(desc) + \" \" + desc + \"</h2>\";"
"}"
"}"
"}"
"}"
""
"function weatherEmoji(description){"
"if(description){"
"var emoji;"
"switch(description){"
"case 'clear sky':"
"emoji = \"&#x1F324\";"
"break;"
"case 'few clouds':"
"emoji = \"&#x26C5\";"
"break;"
"case 'scattered clouds':"
"emoji = \"&#x1F325\";"
"break;"
"case 'broken clouds':"
"emoji = \"&#x1F32B\";"
"break;"
"case 'shower rain':"
"emoji = \"&#x1F327\";"
"break;"
"case 'rain':"
"emoji = \"&#x1F327\";"
"break;"
"case 'thunderstorm':"
"emoji = \"&#x1F329\";"
"break;"
"case 'snow':"
"emoji = \"&#x1F328\";"
"break;"
"case 'mist':"
"emoji = \"&#xF32B\";"
"break;"
"}"
"return emoji;"
"}"
"}"
""
"$(document).ready(function() {"
"openWeatherMap();"
"setInterval(openWeatherMap,60000*5);"
"});"
"</script>"
""
"</head>"
"<body>"
"<br>"
"<div class=\"insolata_font\">"
"<center>"
"<h1>"
"Remote Control Station"
"</h1>"
"</center>"
"</div>"
"<div class=\"insolata_font\">"
"<center>"
"<h2>"
"Select your service:"
"</h2>"
"</center>"
"</div>"
"<center>"
"<table class=\"main_table\">"
"<tr>"
"<td>"
"<button class=\"btn btn-primary btn-lg btn-block\" onclick=\"location.href='./tvRemote';\">"
"<svg class=\"bi bi-display-fill\" width=\"1em\" height=\"1em\" viewBox=\"0 0 16 16\" fill=\"currentColor\" xmlns=\"http://www.w3.org/2000/svg\">"
"<path d=\"M5.75 13.5c.167-.333.25-.833.25-1.5h4c0 .667.083 1.167.25 1.5H11a.5.5 0 010 1H5a.5.5 0 010-1h.75z\"/>"
"<path fill-rule=\"evenodd\" d=\"M13.991 3H2c-.325 0-.502.078-.602.145a.758.758 0 00-.254.302A1.46 1.46 0 001 4.01V10c0 .325.078.502.145.602.07.105.17.188.302.254a1.464 1.464 0 00.538.143L2.01 11H14c.325 0 .502-.078.602-.145a.758.758 0 00.254-.302 1.464 1.464 0 00.143-.538L15 9.99V4c0-.325-.078-.502-.145-.602a.757.757 0 00-.302-.254A1.46 1.46 0 0013.99 3zM14 2H2C0 2 0 4 0 4v6c0 2 2 2 2 2h12c2 0 2-2 2-2V4c0-2-2-2-2-2z\" clip-rule=\"evenodd\"/>"
"<path d=\"M2 4h12v6H2z\"/>"
"</svg>"
"</button>"
"</td>"
"<td><button class=\"btn btn-primary btn-lg btn-block\"><span class=\"glyphicon glyphicon-equalizer\"</span></button></td>"
"<td><button class=\"btn btn-primary btn-lg btn-block\"><span class=\"glyphicon glyphicon-cd\"</span></button></td>"
"</tr>"
"<tr>"
"<td>"
"<button class=\"btn btn-primary btn-lg btn-block\">"
"<svg class=\"bi bi-sun\" width=\"1em\" height=\"1em\" viewBox=\"0 0 16 16\" fill=\"currentColor\" xmlns=\"http://www.w3.org/2000/svg\">"
"<path d=\"M3.5 8a4.5 4.5 0 119 0 4.5 4.5 0 01-9 0z\"/>"
"<path fill-rule=\"evenodd\" d=\"M8.202.28a.25.25 0 00-.404 0l-.91 1.255a.25.25 0 01-.334.067L5.232.79a.25.25 0 00-.374.155l-.36 1.508a.25.25 0 01-.282.19l-1.532-.245a.25.25 0 00-.286.286l.244 1.532a.25.25 0 01-.189.282l-1.509.36a.25.25 0 00-.154.374l.812 1.322a.25.25 0 01-.067.333l-1.256.91a.25.25 0 000 .405l1.256.91a.25.25 0 01.067.334L.79 10.768a.25.25 0 00.154.374l1.51.36a.25.25 0 01.188.282l-.244 1.532a.25.25 0 00.286.286l1.532-.244a.25.25 0 01.282.189l.36 1.508a.25.25 0 00.374.155l1.322-.812a.25.25 0 01.333.067l.91 1.256a.25.25 0 00.405 0l.91-1.256a.25.25 0 01.334-.067l1.322.812a.25.25 0 00.374-.155l.36-1.508a.25.25 0 01.282-.19l1.532.245a.25.25 0 00.286-.286l-.244-1.532a.25.25 0 01.189-.282l1.508-.36a.25.25 0 00.155-.374l-.812-1.322a.25.25 0 01.067-.333l1.256-.91a.25.25 0 000-.405l-1.256-.91a.25.25 0 01-.067-.334l.812-1.322a.25.25 0 00-.155-.374l-1.508-.36a.25.25 0 01-.19-.282l.245-1.532a.25.25 0 00-.286-.286l-1.532.244a.25.25 0 01-.282-.189l-.36-1.508a.25.25 0 00-.374-.155l-1.322.812a.25.25 0 01-.333-.067L8.203.28zM8 2.5a5.5 5.5 0 100 11 5.5 5.5 0 000-11z\" clip-rule=\"evenodd\"/>"
"</svg>"
"</button>"
"</td>"
"<td><button class=\"btn btn-primary btn-lg btn-block\"><span class=\"glyphicon glyphicon-question-sign\"</span></button></td>"
"<td><button class=\"btn btn-primary btn-lg btn-block\"><span class=\"glyphicon glyphicon-question-sign\"</span></button></td>"
"</tr>"
"<tr>"
"<td><button class=\"btn btn-primary btn-lg btn-block\"><span class=\"glyphicon glyphicon-question-sign\"</span></button></td>"
"<td><button class=\"btn btn-primary btn-lg btn-block\"><span class=\"glyphicon glyphicon-question-sign\"</span></button></td>"
"<td><button class=\"btn btn-primary btn-lg btn-block\"><span class=\"glyphicon glyphicon-question-sign\"</span></button></td>"
"</tr>"
"<tr>"
"<td><button class=\"btn btn-primary btn-lg btn-block\"><span class=\"glyphicon glyphicon-question-sign\"</span></button></td>"
"<td><button class=\"btn btn-primary btn-lg btn-block\"><span class=\"glyphicon glyphicon-question-sign\"</span></button></td>"
"<td><button class=\"btn btn-primary btn-lg btn-block\"><span class=\"glyphicon glyphicon-question-sign\"</span></button></td>"
"</tr>"
"</table>"
"<center>"
"<h2 class=\"insolata_font\">"
"Current Weather:"
"</h2>"
"<div id=\"weatherArea\" class=\"insolata_font\">"
"Loading weather data..."
"</div>"
"</center>"
"<br>"
"</body>"
"</html>";
#endif