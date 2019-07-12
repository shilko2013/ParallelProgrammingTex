struct str { 
    char a; 
    char b;  
};
int n = 10000;
struct str array[n];

void fprint_a() 
{ 
    for (int i = 0; i < n; ++i) 
        str[i].a = 'a';
} 

void fprint_b() 
{ 
    for (int i = 0; i < n; ++i) 
       str[i].b = 'b';
}