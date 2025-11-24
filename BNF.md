<program> ::= "<MYHTML>" <head_opt> <body> "</MYHTML>";

<head_opt> ::= ε | <head_block>

<head_block> ::= "<head>" <title> <meta_opt> "</head>"
<meta_opt> ::= ε | <meta_opt> <meta>;

<title> ::= "<title>" TEXT "</title>"

<meta> ::= "<meta" "charset=" STRING ">"
        | "<meta" "name=" STRING "content=" STRING ">"

<body> ::= "<body>" <body_opt> "</body>"
<body_opt> ::= ε | <body_opt> <body_elements>
<body_elements> ::= <p> | <a> | <img> | <form> | <div>

<p> ::= "<p" "id=" QUOTED <style_opt> ">" <text_opt> "</p>"

<a> ::= "<a" "id=" QUOTED "href=" QUOTED ">" <text_img_opt> "</a>"
<text_img_opt> ::= ε | TEXT | <img> | TEXT <img> | <img> TEXT | TEXT <img> TEXT

<img> ::= "<img" "id=" QUOTED "src=" QUOTED "alt=" QUOTED <width_height_opt> ">"
<width_height_opt> ::= <width_opt> <height_opt>
<width_opt>  ::= ε | "width="  QUOTED
<height_opt> ::= ε | "height=" QUOTED

<form> ::= "<form" "id=" QUOTED <style_opt> ">" <form_children_opt> "</form>"
<form_children_opt> ::= ε | <input><form_children_opt> | <label><form_children_opt>

<input> ::= "<input" "id=" QUOTED "type=" QUOTED <input_opt> ">"
<input_opt> ::= ε | <input_opt> "value=" QUOTED | <input_opt> "style=" QUOTED

<label> ::= "<label" "id=" QUOTED "for=" QUOTED <style_opt> ">" <text_opt> "</label>"

<div> ::= "<div" "id=" QUOTED <style_opt> ">" <div_opt> "</div>"
<div_opt> ::= ε | <div_opt> <div_children>
<div_children> ::= <p> | <a> | <img> | <form>