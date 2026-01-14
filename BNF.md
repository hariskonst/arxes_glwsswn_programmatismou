<program> ::= MYHTML_OPEN <head_opt> BODY_OPEN <body_opt> BODY_CLOSE MYHTML_CLOSE
        
<head_opt> ::= <head_block> 
                | ε
        
<head_block> ::= HEAD_OPEN TITLE_OPEN <text> TITLE_CLOSE <meta_list> HEAD_CLOSE

<meta_list> ::= <meta_list><meta_block> 
                | ε

<meta_block> ::= META <meta_attr_list> MEGALYTERO

<meta_attr_list> ::= CHARSET ISON STRING | NAME ISON STRING CONTENT ISON STRING

<body_opt> ::= <body_opt><body_elements>
        | ε

<body_elements> ::= 
        <p_block>
        |<div_block>
        |<a_block>
        |<form_block>
        |<img_block>

<p_block> ::= P_OPEN <p_attr_list> MEGALYTERO <p_content> P_CLOSE

<p_attr_list> ::=
        ID ISON STRING
         | ID ISON STRING STYLE ISON STRING 
         | STYLE ISON STRING ID ISON STRING

<p_content> ::= <text>
        | ε

<div_block> ::= DIV_OPEN <div_attr_list> MEGALYTERO <div_opt> DIV_CLOSE

<div_attr_list> ::=
        ID <K> 
        | ID <K> STYLE <K> 
        | STYLE <K> ID <K>

<div_opt> ::=
        <div_opt><div_elements> 
        | <div_elements>

<div_elements> ::=
        <p_block>
        |<a_block>
        |<form_block>
        |<img_block>

<a_block> ::= A_OPEN <a_attr_list> MEGALYTERO <a_opt> A_CLOSE;

<a_attr_list> ::= ID ISON STRING HREF ISON STRING 
                | HREF ISON STRING ID ISON STRING

<a_opt> ::=
    <text> 
    | <img_block> 
    | <text><img_block> 
    |  ε

<img_block> ::=
    IMAGE <img_attr_list> MEGALYTERO

<img_attr_list> ::=
   HEIGHT <I> WIDTH <I> ID <K> SRC <K> ALT <K> | WIDTH <I> HEIGHT <I> ID <K> SRC <K> ALT <K> | WIDTH <I> ID <K> HEIGHT <I> SRC <K> ALT <K> | WIDTH <I> ID <K> SRC <K> HEIGHT <I> ALT <K> | WIDTH <I> ID <K> SRC <K> ALT <K> HEIGHT <I>   
   | HEIGHT <I> ID <K> WIDTH <I> SRC <K> ALT <K> | ID <K> HEIGHT <I> WIDTH <I> SRC <K> ALT <K> | ID <K> WIDTH <I> HEIGHT <I> SRC <K> ALT <K> | ID <K> WIDTH <I> SRC <K> HEIGHT <I> ALT <K> | ID <K> WIDTH <I> SRC <K> ALT <K> HEIGHT <I>
   | HEIGHT <I> ID <K> SRC <K> WIDTH <I> ALT <K> | ID <K> HEIGHT <I> SRC <K> WIDTH <I> ALT <K> | ID <K> SRC <K> HEIGHT <I> WIDTH <I> ALT <K> | ID <K> SRC <K> WIDTH <I> HEIGHT <I> ALT <K> | ID <K> SRC <K> WIDTH <I> ALT <K> HEIGHT <I>
   | HEIGHT <I> ID <K> SRC <K> ALT <K> WIDTH <I> | ID <K> HEIGHT <I> SRC <K> ALT <K> WIDTH <I> | ID <K> SRC <K> HEIGHT <I> ALT <K> WIDTH <I> | ID <K> SRC <K> ALT <K> HEIGHT <I> WIDTH <I> | ID <K> SRC <K> ALT <K> WIDTH <I> HEIGHT <I>
   | HEIGHT <I> WIDTH <I> ID <K> ALT <K> SRC <K> | WIDTH <I> HEIGHT <I> ID <K> ALT <K> SRC <K> | WIDTH <I> ID <K> HEIGHT <I> ALT <K> SRC <K> | WIDTH <I> ID <K> ALT <K> HEIGHT <I> SRC <K> | WIDTH <I> ID <K> ALT <K> SRC <K> HEIGHT <I>
   | HEIGHT <I> ID <K> WIDTH <I> ALT <K> SRC <K> | ID <K> HEIGHT <I> WIDTH <I> ALT <K> SRC <K> | ID <K> WIDTH <I> HEIGHT <I> ALT <K> SRC <K> | ID <K> WIDTH <I> ALT <K> HEIGHT <I> SRC <K> | ID <K> WIDTH <I> ALT <K> SRC <K> HEIGHT <I>
   | HEIGHT <I> ID <K> ALT <K> WIDTH <I> SRC <K> | ID <K> HEIGHT <I> ALT <K> WIDTH <I> SRC <K> | ID <K> ALT <K> HEIGHT <I> WIDTH <I> SRC <K> | ID <K> ALT <K> WIDTH <I> HEIGHT <I> SRC <K> | ID <K> ALT <K> WIDTH <I> SRC <K> HEIGHT <I>
   | HEIGHT <I> ID <K> ALT <K> SRC <K> WIDTH <I> | ID <K> HEIGHT <I> ALT <K> SRC <K> WIDTH <I> | ID <K> ALT <K> HEIGHT <I> SRC <K> WIDTH <I> | ID <K> ALT <K> SRC <K> HEIGHT <I> WIDTH <I> | ID <K> ALT <K> SRC <K> WIDTH <I> HEIGHT <I>
   | HEIGHT <I> WIDTH <I> SRC <K> ID <K> ALT <K> | WIDTH <I> HEIGHT <I> SRC <K> ID <K> ALT <K> | WIDTH <I> SRC <K> HEIGHT <I> ID <K> ALT <K> | WIDTH <I> SRC <K> ID <K> HEIGHT <I> ALT <K> | WIDTH <I> SRC <K> ID <K> ALT <K> HEIGHT <I>
   | HEIGHT <I> SRC <K> WIDTH <I> ID <K> ALT <K> | SRC <K> HEIGHT <I> WIDTH <I> ID <K> ALT <K> | SRC <K> WIDTH <I> HEIGHT <I> ID <K> ALT <K> | SRC <K> WIDTH <I> ID <K> HEIGHT <I> ALT <K> | SRC <K> WIDTH <I> ID <K> ALT <K> HEIGHT <I>
   | HEIGHT <I> SRC <K> ID <K> WIDTH <I> ALT <K> | SRC <K> HEIGHT <I> ID <K> WIDTH <I> ALT <K> | SRC <K> ID <K> HEIGHT <I> WIDTH <I> ALT <K> | SRC <K> ID <K> WIDTH <I> HEIGHT <I> ALT <K> | SRC <K> ID <K> WIDTH <I> ALT <K> HEIGHT <I>
   | HEIGHT <I> SRC <K> ID <K> ALT <K> WIDTH <I> | SRC <K> HEIGHT <I> ID <K> ALT <K> WIDTH <I> | SRC <K> ID <K> HEIGHT <I> ALT <K> WIDTH <I> | SRC <K> ID <K> ALT <K> HEIGHT <I> WIDTH <I> | SRC <K> ID <K> ALT <K> WIDTH <I> HEIGHT <I>
   | HEIGHT <I> WIDTH <I> SRC <K> ALT <K> ID <K> | WIDTH <I> HEIGHT <I> SRC <K> ALT <K> ID <K> | WIDTH <I> SRC <K> HEIGHT <I> ALT <K> ID <K> | WIDTH <I> SRC <K> ALT <K> HEIGHT <I> ID <K> | WIDTH <I> SRC <K> ALT <K> ID <K> HEIGHT <I>
   | HEIGHT <I> SRC <K> WIDTH <I> ALT <K> ID <K> | SRC <K> HEIGHT <I> WIDTH <I> ALT <K> ID <K> | SRC <K> WIDTH <I> HEIGHT <I> ALT <K> ID <K> | SRC <K> WIDTH <I> ALT <K> HEIGHT <I> ID <K> | SRC <K> WIDTH <I> ALT <K> ID <K> HEIGHT <I>
   | HEIGHT <I> SRC <K> ALT <K> WIDTH <I> ID <K> | SRC <K> HEIGHT <I> ALT <K> WIDTH <I> ID <K> | SRC <K> ALT <K> HEIGHT <I> WIDTH <I> ID <K> | SRC <K> ALT <K> WIDTH <I> HEIGHT <I> ID <K> | SRC <K> ALT <K> WIDTH <I> ID <K> HEIGHT <I> 
   | HEIGHT <I> SRC <K> ALT <K> ID <K> WIDTH <I> | SRC <K> HEIGHT <I> ALT <K> ID <K> WIDTH <I> | SRC <K> ALT <K> HEIGHT <I> ID <K> WIDTH <I> | SRC <K> ALT <K> ID <K> HEIGHT <I> WIDTH <I> | SRC <K> ALT <K> ID <K> WIDTH <I> HEIGHT <I>
   | HEIGHT <I> WIDTH <I> ALT <K> SRC <K> ID <K> | WIDTH <I> HEIGHT <I> ALT <K> SRC <K> ID <K> | WIDTH <I> ALT <K> HEIGHT <I> SRC <K> ID <K> | WIDTH <I> ALT <K> SRC <K> HEIGHT <I> ID <K> | WIDTH <I> ALT <K> SRC <K> ID <K> HEIGHT <I>
   | HEIGHT <I> ALT <K> WIDTH <I> SRC <K> ID <K> | ALT <K> HEIGHT <I> WIDTH <I> SRC <K> ID <K> | ALT <K> WIDTH <I> HEIGHT <I> SRC <K> ID <K> | ALT <K> WIDTH <I> SRC <K> HEIGHT <I> ID <K> | ALT <K> WIDTH <I> SRC <K> ID <K> HEIGHT <I>
   | HEIGHT <I> ALT <K> SRC <K> WIDTH <I> ID <K> | ALT <K> HEIGHT <I> SRC <K> WIDTH <I> ID <K> | ALT <K> SRC <K> HEIGHT <I> WIDTH <I> ID <K> | ALT <K> SRC <K> WIDTH <I> HEIGHT <I> ID <K> | ALT <K> SRC <K> WIDTH <I> ID <K> HEIGHT <I>
   | HEIGHT <I> ALT <K> SRC <K> ID <K> WIDTH <I> | ALT <K> HEIGHT <I> SRC <K> ID <K> WIDTH <I> | ALT <K> SRC <K> HEIGHT <I> ID <K> WIDTH <I> | ALT <K> SRC <K> ID <K> HEIGHT <I> WIDTH <I> | ALT <K> SRC <K> ID <K> WIDTH <I> HEIGHT <I>
   | HEIGHT <I> WIDTH <I> ALT <K> ID <K> SRC <K> | WIDTH <I> HEIGHT <I> ALT <K> ID <K> SRC <K> | WIDTH <I> ALT <K> HEIGHT <I> ID <K> SRC <K> | WIDTH <I> ALT <K> ID <K> HEIGHT <I> SRC <K> | WIDTH <I> ALT <K> ID <K> SRC <K> HEIGHT <I>
   | HEIGHT <I> ALT <K> WIDTH <I> ID <K> SRC <K> | ALT <K> HEIGHT <I> WIDTH <I> ID <K> SRC <K> | ALT <K> WIDTH <I> HEIGHT <I> ID <K> SRC <K> | ALT <K> WIDTH <I> ID <K> HEIGHT <I> SRC <K> | ALT <K> WIDTH <I> ID <K> SRC <K> HEIGHT <I>
   | HEIGHT <I> ALT <K> ID <K> WIDTH <I> SRC <K> | ALT <K> HEIGHT <I> ID <K> WIDTH <I> SRC <K> | ALT <K> ID <K> HEIGHT <I> WIDTH <I> SRC <K> | ALT <K> ID <K> WIDTH <I> HEIGHT <I> SRC <K> | ALT <K> ID <K> WIDTH <I> SRC <K> HEIGHT <I>
   | HEIGHT <I> ALT <K> ID <K> SRC <K> WIDTH <I> | ALT <K> HEIGHT <I> ID <K> SRC <K> WIDTH <I> | ALT <K> ID <K> HEIGHT <I> SRC <K> WIDTH <I> | ALT <K> ID <K> SRC <K> HEIGHT <I> WIDTH <I> | ALT <K> ID <K> SRC <K> WIDTH <I> HEIGHT <I>
   | WIDTH <I> ID <K> SRC <K> ALT <K> | ID <K> WIDTH <I> SRC <K> ALT <K> | ID <K> SRC <K> WIDTH <I> ALT <K> | ID <K> SRC <K> ALT <K> WIDTH <I> 
   | WIDTH <I> ID <K> ALT <K> SRC <K> | ID <K> WIDTH <I> ALT <K> SRC <K> | ID <K> ALT <K> WIDTH <I> SRC <K> | ID <K> ALT <K> SRC <K> WIDTH <I>
   | WIDTH <I> SRC <K> ALT <K> ID <K> | SRC <K> WIDTH <I> ALT <K> ID <K> | SRC <K> ALT <K> WIDTH <I> ID <K> | SRC <K> ALT <K> ID <K> WIDTH <I>
   | WIDTH <I> SRC <K> ID <K> ALT <K> | SRC <K> WIDTH <I> ID <K> ALT <K> | SRC <K> ID <K> WIDTH <I> ALT <K> | SRC <K> ID <K> ALT <K> WIDTH <I>
   | WIDTH <I> ALT <K> SRC <K> ID <K> | ALT <K> WIDTH <I> SRC <K> ID <K> | ALT <K> SRC <K> WIDTH <I> ID <K> | ALT <K> SRC <K> ID <K> WIDTH <I>
   | WIDTH <I> ALT <K> ID <K> SRC <K> | ALT <K> WIDTH <I> ID <K> SRC <K> | ALT <K> ID <K> WIDTH <I> SRC <K> | ALT <K> ID <K> SRC <K> WIDTH <I>
   | HEIGHT <I> ID <K> SRC <K> ALT <K> | ID <K> HEIGHT <I> SRC <K> ALT <K> | ID <K> SRC <K> HEIGHT <I> ALT <K> | ID <K> SRC <K> ALT <K> HEIGHT <I> 
   | HEIGHT <I> ID <K> ALT <K> SRC <K> | ID <K> HEIGHT <I> ALT <K> SRC <K> | ID <K> ALT <K> HEIGHT <I> SRC <K> | ID <K> ALT <K> SRC <K> HEIGHT <I>
   | HEIGHT <I> SRC <K> ALT <K> ID <K> | SRC <K> HEIGHT <I> ALT <K> ID <K> | SRC <K> ALT <K> HEIGHT <I> ID <K> | SRC <K> ALT <K> ID <K> HEIGHT <I>
   | HEIGHT <I> SRC <K> ID <K> ALT <K> | SRC <K> HEIGHT <I> ID <K> ALT <K> | SRC <K> ID <K> HEIGHT <I> ALT <K> | SRC <K> ID <K> ALT <K> HEIGHT <I>
   | HEIGHT <I> ALT <K> SRC <K> ID <K> | ALT <K> HEIGHT <I> SRC <K> ID <K> | ALT <K> SRC <K> HEIGHT <I> ID <K> | ALT <K> SRC <K> ID <K> HEIGHT <I>
   | HEIGHT <I> ALT <K> ID <K> SRC <K> | ALT <K> HEIGHT <I> ID <K> SRC <K> | ALT <K> ID <K> HEIGHT <I> SRC <K> | ALT <K> ID <K> SRC <K> HEIGHT <I>
   | ID <K> SRC <K> ALT <K> | ID <K> ALT <K> SRC <K>
   | SRC <K> ALT <K> ID <K> | SRC <K> ID <K> ALT <K>
   | ALT <K> SRC <K> ID <K> | ALT <K> ID <K> SRC <K>

<I> ::=  ISON INT

<K> ::=  ISON STRING

<form_block> ::= FORM_OPEN <form_attr_list> MEGALYTERO <form_opt> FORM_CLOSE

<form_attr_list> ::= ID ISON STRING | ID ISON STRING STYLE ISON STRING | STYLE ISON STRING ID ISON STRING

<form_opt> ::=
    <form_opt><form_elements>
    | <form_elements>
    
<form_elements> ::=
    <input_block>
    | <label_block>

<input_block> ::= INPUT <input_attr_list> MEGALYTERO

<input_attr_list> ::=
    TYPE <K> ID <K> | ID <K> TYPE <K>
    | VALUE <K> TYPE <K> ID <K> | TYPE <K> VALUE <K> ID <K> | TYPE <K> ID <K> VALUE <K>
    | VALUE <K> ID <K> TYPE <K> | ID <K> VALUE <K> TYPE <K> | ID <K> TYPE <K> VALUE <K>
    | STYLE <K> TYPE <K> ID <K> | TYPE <K> STYLE <K> ID <K> | TYPE <K> ID <K> STYLE <K>
    | STYLE <K> ID <K> TYPE <K> | ID <K> STYLE <K> TYPE <K> | ID <K> TYPE <K> STYLE <K>
    | VALUE <K> STYLE <K> TYPE <K> ID <K> | STYLE <K> VALUE <K> TYPE <K> ID <K> | STYLE <K> TYPE <K> VALUE <K> ID <K> | STYLE <K> TYPE <K> ID <K> VALUE <K>
    | VALUE <K> TYPE <K> STYLE <K> ID <K> | TYPE <K> VALUE <K> STYLE <K> ID <K> | TYPE <K> STYLE <K> VALUE <K> ID <K> | TYPE <K> STYLE <K> ID <K> VALUE <K>
    | VALUE <K> TYPE <K> ID <K> STYLE <K> | TYPE <K> VALUE <K> ID <K> STYLE <K> | TYPE <K> ID <K> VALUE <K> STYLE <K> | TYPE <K> ID <K> STYLE <K> VALUE <K>
    | VALUE <K> STYLE <K> ID <K> TYPE <K> | STYLE <K> VALUE <K> ID <K> TYPE <K> | STYLE <K> ID <K> VALUE <K> TYPE <K> | STYLE <K> ID <K> TYPE <K> VALUE <K>
    | VALUE <K> ID <K> STYLE <K> TYPE <K> | ID <K> VALUE <K> STYLE <K> TYPE <K> | ID <K> STYLE <K> VALUE <K> TYPE <K> | ID <K> STYLE <K> TYPE <K> VALUE <K>
    | VALUE <K> ID <K> TYPE <K> STYLE <K> | ID <K> VALUE <K> TYPE <K> STYLE <K> | ID <K> TYPE <K> VALUE <K> STYLE <K> | ID <K> TYPE <K> STYLE <K> VALUE <K>

<label_block> ::= LABEL_OPEN <lbl_attr_list> MEGALYTERO <text> LABEL_CLOSE;

<lbl_attr_list> ::=
    ID <K> FOR <K> | FOR <K> ID <K>
    | STYLE <K> ID <K> FOR <K> | ID <K> STYLE <K> FOR <K> | ID <K> FOR <K> STYLE <K>
    | STYLE <K> FOR <K> ID <K> | FOR <K> STYLE <K> ID <K> | FOR <K> ID <K> STYLE <K>

<text> ::=
    <text> TEXT
    | TEXT