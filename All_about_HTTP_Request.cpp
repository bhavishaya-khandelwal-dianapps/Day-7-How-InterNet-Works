//* HTTP(Hyper Text Transfer Protocol) : It's like a set of rules that helps computers and websites communicate with each other over the internet.

//? Protocol : A protocol is a system of rules for how data is exchanged between computers.
//* Hypertext : This refers to the text on a webpage that contains links to the other pages or resources.
//? Transfer: This means moving data from one place to another.
//* Request/Response: When you type a web address (like www.google.com) into your browser, your computer sends an HTTP request to the server. The server then sends back an HTTP response with the content (like a webpage or image) you asked for.


//! In short, HTTP is the language your computer uses to request and receive information from websites.
//* It helps load web pages, images, and videos 
//? And it define how data is travelling between your browser and a web server.


//? URL(Uniform Resouce Locator), URI(), URN()



//todo -- What are HTTP request...??
//* An HTTP request is like a letter your computer sends to a website's server asking for something, such as a webpage or an image. 
//? 1. Request Method -> This tells the server what you want to do. The most common method is GET(asking for data) or POST(sending data).
//* 2. URL(Uniform Resource Locator) : This is the web address you want to visit (like https://www.google.com)
//! 3. Headers : These are extra details about the request, such as 
    //* metadata -> key-value pair sent along with the request and response 
    //? Work of Headers -> caching, authentication, manage state(basically user ki state ko manage krrne ke liye like woh logged in hai kya, yaa woh guest user hai kya)

    //* 1. Request Headers -> from client 
    //* 2. Response Headers -> from servers 
    //* 3. Representation Header -> encoding / compression 
    //* 4. Payload Header -> data 


    //! Most Common Headers -> 
    //? Accept : application/ json (Basicaaly it tells that which type of data i am going to accept)
    //* User-agent : Mozilla (It only tells that from which application the request has come, like aapke browser se aayi hai toh browser konsa thaa (mozilla, safari), yaa kahin aur se aayi hai ), Basically it tells what type of device or browser you are using (like Chrome, FireFox, Safari)
    //? Authorization: this is most commonly used because it sends info like USERNAME, PASSWORD (or an API key) to the server to prove you're allowed to access certain resources. 
    //* Content-Type : Tells the server what kind of data you're sending 
    //? Cookie : Sends stored information(like login details) from your browser to the server, so it can remember you
    //* Host : Shows the server which website you are trying to reach, especially when multiple websites shares the same server. 


    //todo -- Some more headers 
    //! These are some CORS(Cross Origin Resource Sharing) Headers :- So basically it's a security feature implemented by web browsers to control how web pages from one domain can 
    //* Access-Control-Allow-Origin : Basically kahan kahan se request aa skti hai hamaari application pe

    //? Access-Control-Allow-Credentials : Kon kon se credentials allowed hai 

    //* Access-Control-Allow-Methods : This header specifies which HTTP methods (like GET, POST, PUT, DELETE) are allowed when making a request from another domain



    //todo -- Some security policies 
    //* Cross-Origin-Embedder-Policy 
    //? Cross-Origin-Opener-Policy 
    //* Content-Security-Policy 
    //? X-XSS-Protection 


//todo -- What is in an HTTP request body?
//* The HTTP REQUEST BODY is the part of an HTTP REQUEST where you can send data from your computer(or browser) to the server. It's like a "PACKAGE" that contains the actual information you want to send 

//todo -- When is there a request body?
//? Not every HTTP request has a body. The request body is usually included when you're sending data to the server, like when you:
    //* Submit a form (e.g., name, email, password)
    //? Upload a file
    //* Send JSON data to an API (e.g., when you add or update something on a website)
//todo -- In Simple Terms:
//? The HTTP request body is just the "container" where you put the data you want to send to a server. It could be things like form information, files, or JSON data, and it's used when you need to send more complex or large pieces of information (like signing up for a website or uploading a file).




//todo -- What is an HTTP method ? 
//* An HTTP METHOD is a way for your browser(or any client) to tell the server what kind of action it wants to perform on a resource.
//? In simple terms, it's like telling the server what you want to do: 
    //* get Something
    //? send Something 
    //* delete Something 

    //todo -- Different Methods -> 
    //! 1. GET :- This method is used to REQUEST data from a server.
    //? Example -> We use it when we want to view a webpage or get information from the server, like loading a website.
    //? Important -> GET is safe because it dosen't change anything on the server 


    //! POST : This method is used to SEND data to the server, often when submitting forms or uploading data.
    //? Example -> When we fillout a form and submit it 
    //* Important -> POST is not safe because it usually creates or updates data on the server. 


    //! PUT : This method is used to UPDATE or REPLACE a resouce on the server. 
    //? Example -> If you edit your profile on a website
    //* Important -> PUT is used to update existing resources, and it's typically used when you want to replace an entire resource 


    //! DELETE : This method is used to REMOVE or DELETE a resource from the server.
    //? Exmaple -> If you delete a photo from youor account, a DELETE request is sent to the server to remove that photo. 
    //* Important -> DELETE is used to permanently remove data from the server.


    //! PATCH : This method is used to PARTIALLY UPDATE a resource, meaning you send only the changes, not the whole resource.
    //? Exmaple -> If you only change your phone number on a profile, a PATCH request would send just that change, rather than replacing your entire profile.
    //* Important -> PATCH is like a smaller, more specific update than PUT.

    //! OPTIONS : This method asks the server for information about what actions (methods) are allowed for a particular resource, like which HTTP methods (GET, POST, PUT, etc.) are supported.
    //? Example: A browser might use OPTIONS to check if a server supports CORS (Cross-Origin Resource Sharing).
    //* Important: OPTIONS is mostly used for checking what actions are available without making an actual request.


    //! HEAD : : This method is similar to GET, but it only asks for the headers of a resource, not the content. It's often used to check if a resource exists or to get metadata (like the file size or last modified date) without downloading the whole resource.
    //? When you want to check if a webpage exists or if the content has been updated, a HEAD request can be sent.
    //* Important: HEAD is useful when you only need to know about the resource (metadata) but don’t need to download it.




    //todo -- GET = Ask for information 
    //todo -- POST = Send information 
    //todo -- PUT = Update or replace information  
    //todo -- DELETE = Remove information 
    //todo -- PATCH = Partially update information 
    //todo -- OPTIONS = Ask what actions are allowed 
    //todo -- HEAD = Ask for information, but without the content 



//todo -- What is in an HTTP response ?
//* An HTTP RESPONSE is the answer the server sends back to your browser after it receives an HTTP request. In simple terms, it's the server's way of replying to what you asked for, like sending back the webpage, data, or an error msg.
    //todo -- Here’s what’s inside an HTTP response:
    //? 1. Status Code : This is a number that tells you whether the request was successful or of something went wrong. 
        //* 1xx - Informational 
        //* 2xx - Success
        //* 3xx - Redirection - The resource has been moved to a new location.
        //* 4xx - Client error 
        //* 5xx - Server error 

        //todo -- Some common error messages :- 
        //? 100 = Continue
        //? 102 = Processing 
        //? 200 = OK 
        //? 201 = Created 
        //? 202 = Accepted 
        //? 307 = Temporary Redirect 
        //? 308 = Permanent Redirect 
        //? 400 = Bad Request 
        //? 401 = Unauthorized 
        //? 402 = Payment Required  
        //? 404 = Not Found 
        //? 500 = Internal Server Error
        //? 504 = Gateway time out  

//* In Simple Terms:
//? An HTTP response is like the server’s reply to your request. It includes:

//* A status code (is everything okay or was there an error?),
//? Headers (extra info to help your browser understand the response),
//* The body (the actual content or data, like a webpage or JSON).