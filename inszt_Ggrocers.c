/*
C TESTBED VERSION  : 9.8.8
FILE UNDER TEST  : "D:\Customers\Microchip Vietnam\Git_project\deepuldra\Ggrocers.c"
DATE OF ANALYSIS : Thu Nov 04 14:51:09 2021
*/
 
#include <stdio.h>
#define QQQdialect GCC____C99                                                                                                                                                                                                        
#undef QQQ146
#undef QQQ148
#undef QQQbndchk
#undef QQQ294
#undef QQQEMBEDDEDICE
 /* Note: for BITMAP execution histories QQQthreaded is not defined */
#undef QQQthreaded 
#undef QQQdo178b
#undef QQQfixbra
#define QQQswitch3
#undef QQQternary
#undef QQQswitch
#undef QQQmacrof
#undef QQQMULTIPROCESSEXH
#undef QQFLUSH
#undef QQNEWBS
#define qqqMaxBranchDepth     20
#undef QQQstructbitmap
 static int zzfileid =     12;
#undef QQQALGONE
#undef QQQVCLFLG
#undef QQQFORKFL
#undef QQQIADDRF
#undef QQQRTI
#undef QQQPERFA
#undef QQQADRMOD
#undef QQQDCAPFL
#undef QQQTEMPLATEONLY
#undef QQQNOATEXIT
#undef QQQUPLOADATEND
#undef QQQNOSTDIO
#undef QQQASHLINGVITRA
#define QQQBITMAP 
#undef QQQBITMAPMCDC 
#undef QQQTIC2XSERIALIO
#undef QQQTIC2XFLASH
#undef QQQCOMPRESSED_EXH
#define QQQMAINFL
#undef QQQSINGLEFILE
#undef QQQFILEID
#define QQQseparate
static int QQQindicator=0;
static int QQQfirstmcdc=1;
 static int Ggrocers_12zzopen                                                                                    = 0;
#ifndef QQQLDRA_PORT                                                                                                                                                                                                                                                
#define FILEPOINT FILE * f,                                                                                                                                                                                                                                         
#if !defined(QQQTEMPLATEONLY) && !defined(FILE) && !defined(QQQNOSTDIO)                                                                                                                                                                                             
#include <stdio.h>                                                                                                                                                                                                                                                  
    /* ----------------------------------------------------------------------* 100 *                                                                                                                                                                                
     * If stdio.h is not available then insert:                                                                                                                                                                                                                     
     *      typedef int * FILE;                                                                                                                                                                                                                                     
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
#endif  /* !(QQQTEMPLATEONLY) && !(FILE) && !(QQQNOSTDIO) */                                                                                                                                                                                                        
#else  /* QQQLDRA_PORT */                                                                                                                                                                                                                                           
#define FILEPOINT                                                                                                                                                                                                                                                   
#include "ldra_port.h"        /* Generic header file for LDRA_PORT */                                                                                                                                                                                               
#ifdef inc_ldra_port_instr                                                                                                                                                                                                                                          
#include "ldra_port_instr.h"  /* Communication definitions and ldra_port common code */                                                                                                                                                                             
#endif  /* inc_ldra_port_instr */                                                                                                                                                                                                                                   
#endif /* QQQLDRA_PORT */                                                                                                                                                                                                                                           
#ifndef QQQnumfil                                                                                                                                                                                                                                                   
#define QQQnumfil 40  /* default setting */                                                                                                                                                                                                                         
#endif  /* QQQnumfil */                                                                                                                                                                                                                                             
#if defined(QQQstructbitmap) && defined(QQQSINGLEFILE)                                                                                                                                                                                                              
      typedef void(*ldra_void_function)();                                                                                                                                                                                                                          
#if defined(QQQMAINFL)                                                                                                                                                                                                                                              
        /* Set qqqshell_upload to 1 if you want to call the qqqtotalupload separately. Although                                                                                                                                                                     
           through the target you would have to set this to 0 before calling the qqqupload.                                                                                                                                                                         
           Move this into ldra_port mechanism. */                                                                                                                                                                                                                   
       int qqqshell_upload = 0;                                                                                                                                                                                                                                     
       int QQQfcn_ptr_num = 0;                                                                                                                                                                                                                                      
       static int qqqisinitialised = 0;                                                                                                                                                                                                                             
       ldra_void_function qqqaccumupload[QQQnumfil];                                                                                                                                                                                                                
       ldra_void_function qqqaccumreset[QQQnumfil];                                                                                                                                                                                                                 
       void qqqtotalupload(void);                                                                                                                                                                                                                                   
       void qqqtotalreset(void);                                                                                                                                                                                                                                    
       void qqpopulate_array_fcn_ptrQQ(int x, ldra_void_function y, ldra_void_function z)                                                                                                                                                                           
       {                                                                                                                                                                                                                                                            
         qqqaccumupload[x]=y;                                                                                                                                                                                                                                       
         qqqaccumreset[x]=z;                                                                                                                                                                                                                                        
         QQQfcn_ptr_num++;                                                                                                                                                                                                                                          
       }                                                                                                                                                                                                                                                            
#else  /* (QQQMAINFL) */                                                                                                                                                                                                                                            
        extern int QQQfcn_ptr_num;                                                                                                                                                                                                                                  
        extern ldra_void_function qqqaccumupload[QQQnumfil];                                                                                                                                                                                                        
        extern void qqpopulate_array_fcn_ptrQQ(int x, ldra_void_function y, ldra_void_function z);                                                                                                                                                                  
        static int qqqstructzzopen = 0;                                                                                                                                                                                                                             
#endif  /* defined(QQQMAINFL) */                                                                                                                                                                                                                                    
#endif  /* defined(QQQstructbitmap) && defined(QQQSINGLEFILE) */                                                                                                                                                                                                    
#ifdef QQQ_KEEPCOMMENTS                                                                                                                                                                                                                                             
  /* -----------------------------------------------------------------------* 101 *                                                                                                                                                                                 
  *            Special settings for systems lacking standard functions.                                                                                                                                                                                             
  * To include code for fprintf define ldra_fprintf                                                                                                                                                                                                                 
  * To include code for sscanf  define ldra_sscanf                                                                                                                                                                                                                  
  * -----------------------------------------------------------------------------                                                                                                                                                                                   
  */                                                                                                                                                                                                                                                                
#endif  /* QQQ_KEEPCOMMENTS */                                                                                                                                                                                                                                      
#if !defined(QQQSUPPRESS_UNDEF)                                                                                                                                                                                                                                     
#undef ldra_fprintf                                                                                                                                                                                                                                                 
#undef ldra_sscanf                                                                                                                                                                                                                                                  
#endif  /* !defined(QQQSUPPRESS_UNDEF) */                                                                                                                                                                                                                           
  /*  #define ldra_fprintf */                                                                                                                                                                                                                                       
  /*  #define ldra_sscanf */                                                                                                                                                                                                                                        
#undef QQQHITMAP_STORAGE                                                                                                                                                                                                                                            
#undef qqnull_params                                                                                                                                                                                                                                                
#define qqnull_params void                                                                                                                                                                                                                                          
#define QQQ_PROTOTYPE_DEF                                                                                                                                                                                                                                           
  /* Conventional Instrumentation */                                                                                                                                                                                                                                
  /* ----------------------------------------------------------------------* 104 *                                                                                                                                                                                  
   * stdlib.h is required for atexit                                                                                                                                                                                                                                
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
#include <stdlib.h>                                                                                                                                                                                                                                                 
#undef QQ_ANSI_PROTOTYPE                                                                                                                                                                                                                                            
#ifdef __STDC__                                                                                                                                                                                                                                                     
#define QQ_ANSI_PROTOTYPE 1                                                                                                                                                                                                                                         
#else /* __STDC__ */                                                                                                                                                                                                                                                
#ifdef VAXC                                                                                                                                                                                                                                                         
#define QQ_ANSI_PROTOTYPE 1                                                                                                                                                                                                                                         
#endif  /* VAXC */                                                                                                                                                                                                                                                  
#endif  /* __STDC__ */                                                                                                                                                                                                                                              
  static unsigned char qqqzzglobflag = 0;                                                                                                                                                                                                                           
  static void qqoutput(FILEPOINT char * s,int i);                                                                                                                                                                                                                   
  static void qqoutput2(FILEPOINT char * s,int i, int j);                                                                                                                                                                                                           
  static void qqoutput3(FILEPOINT char * s,int i,int j,int k);                                                                                                                                                                                                      
  static void qqoutput4(FILEPOINT char * s,int i,int j,int k,int l);                                                                                                                                                                                                
  static void qqoutput0(FILEPOINT char * s);                                                                                                                                                                                                                        
  static int swzzqqzz (int qqqi, int onoff);                                                                                                                                                                                                                        
  static int Ggrocers_12zqqzqz(qqnull_params);                                                                                                                                                                                                                      
  static int Ggrocers_12zqqzqz1(qqnull_params);                                                                                                                                                                                                                     
  static int Ggrocers_12zzqqzz (int qqqi);                                                                                                                                                                                                                          
  static int Ggrocers_12zqendz (int qqqi);                                                                                                                                                                                                                          
  static int Ggrocers_12zqzqzq (int qqqi);                                                                                                                                                                                                                          
  static int Ggrocers_12zzzqtz (int qqqa, int qqqb);                                                                                                                                                                                                                
  static int Ggrocers_12zzzqfz (int qqqa, int qqqb);                                                                                                                                                                                                                
  void Ggrocers_12zzdump (qqnull_params) ;                                                                                                                                                                                                                          
  static void qqqupload (qqnull_params);                                                                                                                                                                                                                            
/* ------------------------------ END OF TESTBED PROTOTYPES -------------------------------- */                                                                                                                                                                     
#define FALSE 0
#define TRUE 1
//commit 24
/*
 * this define determines if we are using stubs -
 * set to 0 for stubs or 1 for no stubs
 */
#define no_stubs 0
/*
 * this define determines the interface to use
 * set to 1 for original interface or 0 for changed interface
 */
#define original_interface 1
#define MAX_FRUIT 5
 
int
  int_array [] = { 1 , 2 , 3 } ;
 
char
  str [] = { "ABC" } ;
/*
 * list of fruit available at the greengrocers
 */
 
typedef
  enum
  {
    apple = 0 ,
    orange = 1 ,
    grapes = 2 ,
    pear = 3 ,
    melon = 4
  } fruit ;
/*
 * names of the fruit available at the greengrocers
 */
 
char *
  fruit_names [] = { "Apple" , "Orange" , "Grapes" , "Pear" , "Melon" } ;
/*
 * prices of the fruit available at the greengrocers
 */
 
double
  fruit_prices [ 5 ] = { 0.12 , 0.14 , 0.31 , 0.09 , 0.86 } ;
 
struct customer_info
{
  fruit favourite ;
  fruit cheapest ;
  double cash ;
} ;
 
double
  us_dollar_er = 1.5345 ;
 
struct customer_info
  customer ;
 
fruit const most_healthiest = melon ;
 
fruit const least_healthiest = pear ;
 
const fruit *
  health ;
/******************************************************************************
 * initialise_customer
 *
 * Initialises the customer structure with the supplied values
 *
 * Output Globals :
 * customer.favourite : set to the value of parameter favourite
 * customer.cash : set to the value of parameter cash if cash > 0
 *
 * Input Parameters :
 * favourite : set to a member of the fruit enumeration e.g. apple
 * cash : initial cash for customer e.g. 1.23
 *****************************************************************************/
 
void
  initialise_customer (
  fruit favourite ,
  double cash )
  {
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (       1 ) ; /* 37 */
    customer.favourite = favourite ;
    customer.cheapest = pear ;
    if
      (
      cash > 0.0
      )
 {
    Ggrocers_12zzqqzz                                                                                    (      2 ) ; /* 1 */
      {
        customer.cash = cash ;
      }
 }                                                                                                   
else                                                                                                
  Ggrocers_12zzqqzz                                                                                    (      3 ) ; /* 4 */
    Ggrocers_12zzqqzz                                                                                    (       4 ) ; /* 30 */  
  }
  /* end of initialise_customer */
/******************************************************************************
 * cash_injection
 *
 * Increments customer.cash by the value of parameter injection
 *
 * Returns value of customer.cash
 *
 * Output Global :
 * customer.cash : will be incremented by parameter injection if injection > 0
 *
 * Input Parameter :
 * injection : amount to add to customer.cash
 *****************************************************************************/
 
double
  customer_cash_injection (
  double injection )
  {
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (       5 ) ; /* 37 */
    if
      (
      injection > 0.0
      )
 {
    Ggrocers_12zzqqzz                                                                                    (      6 ) ; /* 1 */
      {
        customer.cash += injection ;
      }
 }                                                                                                   
else                                                                                                
  Ggrocers_12zzqqzz                                                                                    (      7 ) ; /* 4 */
    Ggrocers_12zzqqzz                                                                                    (       8  ) ; /* 48 */ 
    return
    customer.cash ;
  }
  /* end of customer_cash_injection */
/******************************************************************************
 * get_number_of_pence
 *
 * Takes a price eg 1.34 and converts it into pence (i.e. 134)
 *
 * Returns number of pence indicated by a price
 *
 * Input Parameter :
 * price : the price to convert to pence
 *****************************************************************************/
 
int
  get_number_of_pence (
  double price )
  {
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (       9 ) ; /* 37 */
    int
      pence =
      ( int ) (
      ( price * 100 ) + 0.1 ) ;
    Ggrocers_12zzqqzz                                                                                    (      10  ) ; /* 48 */ 
    return
    pence ;
  }
  /* end of get_number_of_pence */
/******************************************************************************
 * convert_pence
 *
 * Takes a price and converts it into another currency
 *
 * Returns the amount in the currency converted to
 *
 * Input Parameter :
 * pence : the amount to covert
 *
 * Interface Change :
 * Demonstrates removing a global variable and adding a new one
 *****************************************************************************/
 
double
  convert_pence (
  int pence )
  {
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (      11 ) ; /* 37 */
    double
      converted_price ;
    converted_price = (
    ( double ) pence ) /
    100 ;
    converted_price *= us_dollar_er ;
    Ggrocers_12zzqqzz                                                                                    (      12  ) ; /* 48 */ 
    return
    converted_price ;
  }
  /* end of convert_pence */
/*
 * buy_fruit no longer exists and must be stubbed -
 * the stub will be based upon this prototype for buy_fruit
 */
 
int
  buy_fruit (
  fruit name ) ;
/*
 * char_to_fruit no longer exists and must be stubbed -
 * the stub will be based upon this prototype for char_to_fruit
 */
 
int
  char_to_fruit (
  char first_char ,
  fruit * name ) ;
/******************************************************************************
 * buy_fruit_ex
 *
 * Buys the fruit supplied in the parameter if the customer has sufficient
 * funds to do so. The fruit is specified by supplying the first character
 * of the fruit name
 *
 * Returns TRUE if the item was bought, FALSE otherwise
 *
 * Output Global :
 * customer.cash will be modified if a fruit was successfully purchased
 *
 * Input Parameter :
 * first_char : indicates which fruit to be e.g. 'a' will buy an apple
 *
 * Input Globals :
 * customer.cash : the funds available for the customer eg 1.23
 * fruit_prices[0] ... fruit_prices[4] retain as current value
 *****************************************************************************/
 
int
  buy_fruit_ex (
  char first_char )
  {
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (      13 ) ; /* 37 */
    int
      bought = 0 ;
    int
      fruit_found = 1 ;
    fruit
      name ;
    fruit_found =
    char_to_fruit ( first_char , & name ) ;
    if
      (
      fruit_found
      )
 {
    Ggrocers_12zzqqzz                                                                                    (     14 ) ; /* 1 */
      {
        bought =
        buy_fruit ( name ) ;
      }
 }                                                                                                   
else                                                                                                
  Ggrocers_12zzqqzz                                                                                    (     15 ) ; /* 4 */
    Ggrocers_12zzqqzz                                                                                    (      16  ) ; /* 48 */ 
    return
    bought ;
  }
  /* end of buy_fruit_ex */
/******************************************************************************
 * change_fruit_price
 *
 * Changes the price of the specified fruit. This can be both incremental
 * and decremental. If decrementing, the price must always be greater than 0.
 *
 * Returns the new price of the specified fruit
 *
 * Output Global :
 * fruit_prices[] : the price of the requested fruit may be changed
 *
 * Input Parameter :
 * name : member of the fruit enumeration to purchase eg apple
 * increment : the amount to increment or decrement the fruit eg 0.02
 *
 * Input Globals :
 * fruit_prices[0] ... fruit_prices[4] retain as current value
 *****************************************************************************/
 
double
  change_fruit_price (
  fruit name ,
  double increment )
  {
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (      17 ) ; /* 37 */
    if
      (
      fruit_prices [ name ] + increment > 0.0
      )
 {
    Ggrocers_12zzqqzz                                                                                    (     18 ) ; /* 1 */
      {
        fruit_prices [ name ] += increment ;
      }
    Ggrocers_12zzqqzz                                                                                    (     19 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
Ggrocers_12zzqqzz                                                                                    (     20 ); /* 2 */
      {
        printf ( "Price was not changed\n" ) ;
      }
 }
    Ggrocers_12zzqqzz                                                                                    (      21  ) ; /* 48 */ 
    return
    fruit_prices [ name ] ;
  }
  /* end of change_fruit_price */
/******************************************************************************
 * calculate_cheapest_fruit
 *
 * Returns the cheapest item of fruit available in the greengrocers
 *
 * Input Globals :
 * fruit_prices[0] ... fruit_prices[4] retain as current value
 *****************************************************************************/
 
fruit
calculate_cheapest_fruit()
{
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (      22 ) ; /* 37 */
  fruit
    cheapest ;
  int
    i ;
  double
    cheapest_price = 1000000.00 ;
  for
    (
    i = 0
    ;
  ( /* 28 */
    i < 5
  )  /* 7 */
    ;
  ( /* 7 */
    i ++
  ,Ggrocers_12zzqqzz                                                                                    (      23 ) /* 27b */
  ,Ggrocers_12zzqqzz                                                                                    (      24 )) /* 27e */
    )
    {
 { /* 32 */
 int                  QZZZ =   
Ggrocers_12zzqqzz                                                                                    (      25 ) ; /* 32 */
      if
        (
        fruit_prices [ i ] < cheapest_price
        )
 {
    Ggrocers_12zzqqzz                                                                                    (     26 ) ; /* 1 */
        {
          cheapest_price = fruit_prices [ i ] ;
          cheapest = ( fruit ) i ;
        }
 }                                                                                                   
else                                                                                                
  Ggrocers_12zzqqzz                                                                                    (     27 ) ; /* 4 */
    Ggrocers_12zzqqzz                                                                                    (     28 ) ;} /* 6 */
    }
    Ggrocers_12zzqqzz                                                                                    (     29 ) ; /* 5 */
    Ggrocers_12zzqqzz                                                                                    (      30  ) ; /* 48 */ 
  return
  cheapest ;
}
  /* end of calculate_cheapest_fruit */
/******************************************************************************
 * fruit_cheaper_than
 *
 * Returns TRUE if the proce of the fruit is less than the supplied price
 * (or 10 pence if the interface has changed)
 *
 * Input Parameters :
 * name : the fruit to check if it is cheaper than the given price
 * price : the price to check against
 *
 * Input Globals :
 * fruit_prices[0] ... fruit_prices[4] retain as current value
 *
 * Interface Change :
 * Demonstrates the effect of removing a parameter from a procedure
 *****************************************************************************/
 
int
  fruit_cheaper_than (
  fruit name ,
  double price )
  {
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (      31 ) ; /* 37 */
    int
      cheaper ;
    if
      (
      fruit_prices [ name ] < price
      )
 {
    Ggrocers_12zzqqzz                                                                                    (     32 ) ; /* 1 */
      {
        cheaper = 1 ;
      }
    Ggrocers_12zzqqzz                                                                                    (     33 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
Ggrocers_12zzqqzz                                                                                    (     34 ); /* 2 */
      {
        cheaper = 0 ;
      }
 }
    Ggrocers_12zzqqzz                                                                                    (      35  ) ; /* 48 */ 
    return
    cheaper ;
  }
  /* end of fruit_cheaper_than */
/******************************************************************************
 * get_cheapest_fruit
 *
 * Returns the cheapest item of fruit available in the greengrocers
 *
 * Input Globals :
 * fruit_prices[0] ... fruit_prices[4] retain as current value
 *****************************************************************************/
 
fruit
get_cheapest_fruit()
{
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (      36 ) ; /* 37 */
  fruit
    cheapest ;
 Ggrocers_12zzqqzz                                                                                    (      37 ) ; /* 23 */
  cheapest =
    calculate_cheapest_fruit ( ) ;
  customer.cheapest = cheapest ;
    Ggrocers_12zzqqzz                                                                                    (      38  ) ; /* 48 */ 
  return
  cheapest ;
}
  /* end_of_get_cheapest_fruit */
/******************************************************************************
 * get_favourite_fruit_price
 *
 * Returns the price of the customer's favourite fruit
 *
 * Input Parameter :
 * buyer : pointer to customer_info structure e.g. &customer
 * Note : this structure should be initialised before calling this procedure
 *
 * Input Globals :
 * fruit_prices[0] ... fruit_prices[4] retain as current value
 *
 * Interface Change :
 * Demonstrates the effect of changing the input parameter declaration type
 *****************************************************************************/
 
double
  get_favourite_fruit_price (
  struct customer_info * buyer )
  {
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (      39 ) ; /* 37 */
    Ggrocers_12zzqqzz                                                                                    (      40  ) ; /* 48 */ 
    return
    fruit_prices [ buyer -> favourite ] ;
  }
  /* end of get_favourite_fruit_price */
/******************************************************************************
 * how_many_favourite_fruit
 *
 * Returns the maxinum number of a customer's favourite fruit that a customer
 * can buy.
 *
 * Input Globals :
 * customer.favourite : set to a member of the fruit enumeration e.g. apple
 * customer.cash : set to an initial amount of money for the customer e.g. 1.23
 * fruit_prices[0] ... fruit_prices[4] retain as current value
 *
 * Interface Change :
 * Demonstrates the effect of adding an additional parameter
 *****************************************************************************/
 
int
  how_many_favourite_fruit()
  {
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (      41 ) ; /* 37 */
    double
      favourite_price = fruit_prices [ customer.favourite ] ;
    double
      available_cash = customer.cash ;
    int
      how_many = 0 ;
    while
      (
 (  /* 21 */ 
      available_cash >= favourite_price
  )  /* 7 */
      )
      {
 { /* 32 */
  int zzqqzs = Ggrocers_12zzqqzz                                                                                    (     42 ) ; /* 32a */
        how_many ++ ;
        available_cash -= favourite_price ;
    Ggrocers_12zzqqzz                                                                                    (     43 ) ;} /* 6 */
      }
    Ggrocers_12zzqqzz                                                                                    (     44 ) ; /* 5 */
    Ggrocers_12zzqqzz                                                                                    (      45  ) ; /* 48 */ 
    return
    how_many ;
  }
  /* end of how_many_favourite_fruit */
/******************************************************************************
 * write_price_list
 *
 * Writes to a file a list of all fruit available in the greengrocers and their
 * respective prices. The combined price of all the items is returned.
 *
 * Input Parameters :
 * fp : set to fopen ("prices.txt","w")
 * Demonstrates assigning an input parameter to a return from a procedure call
 *
 * Input Globals :
 * fruit_names[0] ... fruit_names[MAX_FRUIT-1]
 * fruit_prices[0] ... fruit_prices[MAX_FRUIT-1]
 * All input globals should retain their current value
 *
 * Interface Change :
 * Demonstrates the effect of changing the return type
 *****************************************************************************/
 
double
  write_price_list (
  FILE * fp )
  {
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (      46 ) ; /* 37 */
    int
      i ;
    double
      total_price = 0 ;
    fprintf ( fp , "Greengrocers Price List\n\n" ) ;
    fprintf ( fp , "FRUIT      PRICE(£)\n" ) ;
    for
      (
      i = 0
      ;
  ( /* 28 */
      i < 5
  )  /* 7 */
      ;
  ( /* 7 */
      i ++
  ,Ggrocers_12zzqqzz                                                                                    (      47 ) /* 27b */
  ,Ggrocers_12zzqqzz                                                                                    (      48 )) /* 27e */
      )
      {
 { /* 32 */
 int                  QZZZ =   
Ggrocers_12zzqqzz                                                                                    (      49 ) ; /* 32 */
        fprintf ( fp , "%-10s %.2f\n" , fruit_names [ i ] , fruit_prices [ i ] ) ;
        total_price += fruit_prices [ i ] ;
    Ggrocers_12zzqqzz                                                                                    (     50 ) ;} /* 6 */
      }
    Ggrocers_12zzqqzz                                                                                    (     51 ) ; /* 5 */
    fclose ( fp ) ;
    Ggrocers_12zzqqzz                                                                                    (      52  ) ; /* 48 */ 
    return
    total_price ;
  }
  /* end of write_price_list */
/******************************************************************************
 * buy_healthiest
 *
 * Buys upto the amount of the most or least healthiest fruit specified by the
 * input parameters. The healthiest fruit is specified in a constant.
 *
 * Returns the difference between the amount requested for purchase and the
 * number actually bought
 *
 * Input Parameters :
 * amount : number of healthiest fruit to buy depending on sufficient funds
 * most : if TRUE then buy the lealthies fruit - otherwise least healthiest
 *
 * Input Globals :
 * healthiest : constant
 *****************************************************************************/
 
int
  buy_healthiest (
  const int amount ,
  const int most )
  {
   int iGgrocers_12zzqqzz                                                                                   
 = Ggrocers_12zzqqzz                                                                                    (      53 ) ; /* 37 */
    int
      i ;
    int
      ok = 1 ;
    int
      count = 0 ;
    if
      (
      most
      )
 {
    Ggrocers_12zzqqzz                                                                                    (     54 ) ; /* 1 */
      {
        health = &most_healthiest ;
      }
    Ggrocers_12zzqqzz                                                                                    (     55 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
Ggrocers_12zzqqzz                                                                                    (     56 ); /* 2 */
      {
        health = &least_healthiest ;
      }
 }
    for
      (
      i = 0
      ;
  ( /* 28 */
      i < amount
  )  /* 7 */
      ;
  ( /* 7 */
      i ++
  ,Ggrocers_12zzqqzz                                                                                    (      57 ) /* 27b */
  ,Ggrocers_12zzqqzz                                                                                    (      58 )) /* 27e */
      )
      {
 { /* 32 */
 int                  QZZZ =   
Ggrocers_12zzqqzz                                                                                    (      59 ) ; /* 32 */
        if
          (
          ok
          )
 {
    Ggrocers_12zzqqzz                                                                                    (     60 ) ; /* 1 */
          {
            ok =
            buy_fruit ( * health ) ;
            if
              (
              ok
              )
 {
    Ggrocers_12zzqqzz                                                                                    (     61 ) ; /* 1 */
              {
                count ++ ;
              }
 }                                                                                                   
else                                                                                                
  Ggrocers_12zzqqzz                                                                                    (     62 ) ; /* 4 */
          }
 }                                                                                                   
else                                                                                                
  Ggrocers_12zzqqzz                                                                                    (     63 ) ; /* 4 */
    Ggrocers_12zzqqzz                                                                                    (     64 ) ;} /* 6 */
      }
    Ggrocers_12zzqqzz                                                                                    (     65 ) ; /* 5 */
    Ggrocers_12zzqqzz                                                                                    (      66  ) ; /* 48 */ 
    return
    amount - count ;
  }
  /* end of buy_healthiest */
/******************************************************************************
 *
 * main routine
 *
 *****************************************************************************/
 
int
  main()
  {
  int mainzz = Ggrocers_12zqqzqz1                                                                                   (); /* 46 */
    int
      num ,
      i ;
    fruit
      cheapest ;
    double
      currency ;
 Ggrocers_12zzqqzz                                                                                    (      67 ) ; /* 23 */
 
    write_price_list (
    stdout ) ;
    printf ( "\n" ) ;
 Ggrocers_12zzqqzz                                                                                    (      68 ) ; /* 23 */
 
    initialise_customer (
    apple , 1.99 ) ;
 Ggrocers_12zzqqzz                                                                                    (      69 ) ; /* 23 */
    num =
      how_many_favourite_fruit ( ) ;
    for
      (
      i = 0
      ;
  ( /* 28 */
      i < num
  )  /* 7 */
      ;
  ( /* 7 */
      i ++
  ,Ggrocers_12zzqqzz                                                                                    (      70 ) /* 27b */
  ,Ggrocers_12zzqqzz                                                                                    (      71 )) /* 27e */
      )
      {
 { /* 32 */
 int                  QZZZ =   
Ggrocers_12zzqqzz                                                                                    (      72 ) ; /* 32 */
/*
 * buy as many of the customer's favourite fruit as possible
 */
        buy_fruit ( customer.favourite ) ;
    Ggrocers_12zzqqzz                                                                                    (     73 ) ;} /* 6 */
      }
    Ggrocers_12zzqqzz                                                                                    (     74 ) ; /* 5 */
 Ggrocers_12zzqqzz                                                                                    (      75 ) ; /* 23 */
 
    customer_cash_injection (
    1.36 ) ;
/*
 * buy a pear
 */
 Ggrocers_12zzqqzz                                                                                    (      76 ) ; /* 23 */
 
    buy_fruit_ex (
    'p'  ) ;
 Ggrocers_12zzqqzz                                                                                    (      77 ) ; /* 23 */
    cheapest =
      get_cheapest_fruit ( ) ;
    if
 (  /* 50 */
      (
 Ggrocers_12zzqqzz                                                                                    (      78 ) , /* 23e */
        fruit_cheaper_than (
        cheapest , 0.10 )
      )
  ) /* 1 */
 {
    Ggrocers_12zzqqzz                                                                                    (     79 ) ; /* 1 */
      {
        printf ( "The cheapest fruit is less than 10 pence\n" ) ;
        printf ( "Increasing price by two pence\n" ) ;
 Ggrocers_12zzqqzz                                                                                    (      80 ) ; /* 23 */
 
        change_fruit_price (
        cheapest , 0.02 ) ;
      }
 }                                                                                                   
else                                                                                                
  Ggrocers_12zzqqzz                                                                                    (     81 ) ; /* 4 */
    if
 (  /* 50 */
      (
 Ggrocers_12zzqqzz                                                                                    (      82 ) , /* 23e */
      customer.cash >
        get_favourite_fruit_price (
        & customer )
      )
  ) /* 1 */
 {
    Ggrocers_12zzqqzz                                                                                    (     83 ) ; /* 1 */
      {
        buy_fruit ( customer.favourite ) ;
      }
 }                                                                                                   
else                                                                                                
  Ggrocers_12zzqqzz                                                                                    (     84 ) ; /* 4 */
 Ggrocers_12zzqqzz                                                                                    (      85 ) ; /* 23 */
 
    buy_healthiest (
    1 , 1 ) ;
 Ggrocers_12zzqqzz                                                                                    (      86 ) ; /* 23 */
    num =
      get_number_of_pence (
      customer.cash ) ;
    printf ( "The customer has %d pence left\n" , num ) ;
 Ggrocers_12zzqqzz                                                                                    (      87 ) ; /* 23 */
    currency =
      convert_pence (
      num ) ;
    printf ( "This is %f in US dollars\n" , currency ) ;
    Ggrocers_12zqzqzq                                                                                    (      88 ) ; /* 48 */
    return
    0 ;
  }
#define qqqbranches     88
#define QQQMAXMCDCSIZE      2
 static FILE * Ggrocers_12zzhfil                                                                                    ;
  /* put in undefs to protect our parameter names from macros */                                                                                                                                                                                                    
#undef f                                                                                                                                                                                                                                                            
#undef i                                                                                                                                                                                                                                                            
#undef j                                                                                                                                                                                                                                                            
#undef k                                                                                                                                                                                                                                                            
#undef s                                                                                                                                                                                                                                                            
#undef l                                                                                                                                                                                                                                                            
#undef ii                                                                                                                                                                                                                                                           
#undef some                                                                                                                                                                                                                                                         
#undef none                                                                                                                                                                                                                                                         
#undef from                                                                                                                                                                                                                                                         
#undef a                                                                                                                                                                                                                                                            
#undef b                                                                                                                                                                                                                                                            
#undef iz                                                                                                                                                                                                                                                           
#undef jz                                                                                                                                                                                                                                                           
#undef qqnull_params                                                                                                                                                                                                                                                
#define qqnull_params void                                                                                                                                                                                                                                          
  /* Conventional Instrumentation */                                                                                                                                                                                                                                
    /* not single file and not fileid */                                                                                                                                                                                                                            
    static char qqqqone[]   = "%6d\n";           /* single point */                                                                                                                                                                                                 
  /* uncompressed data structures */                                                                                                                                                                                                                                
  /* uncompressed  bitmap */                                                                                                                                                                                                                                        
#define QQQFIXEDSIZE                                                                                                                                                                                                                                                
  static int qqqlast = 0;                                                                                                                                                                                                                                           
  static unsigned int bitmaparr[(qqqbranches/8)+1];                                                                                                                                                                                                                 
  /* Not single file */                                                                                                                                                                                                                                             
  static int qqupload_registered = 0;                                                                                                                                                                                                                               
  static int Ggrocers_12zqqzqz(qqnull_params);                                                                                                                                                                                                                      
  static int Ggrocers_12zqqzqz1(qqnull_params);                                                                                                                                                                                                                     
    /* ----------------------------------------------------------------------* 200 *                                                                                                                                                                                
     *            Procedures                                                                                                                                                                                                                                        
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
  /* ----------------------------------------------------------------------* 210 *                                                                                                                                                                                  
   *    C System utilities in use:                                                                                                                                                                                                                                  
   *        fprintf                                                                                                                                                                                                                                                 
   *        fclose                                                                                                                                                                                                                                                  
   *        sscanf                                                                                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 213 *                                                                                                                                                                                  
   *            qqoutput* suite                                                                                                                                                                                                                                     
   *      Main output routines. These may require modification.                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 214 *                                                                                                                                                                                  
   *            qqoutput                                                                                                                                                                                                                                            
   *    This is the principle output routine.                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static void qqoutput(FILEPOINT char * s,int i)                                                                                                                                                                                                                  
  /* f - file pointer, s - format string, i - integer for probe value */                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    /* printing to a file */                                                                                                                                                                                                                                        
    /* fprintf exists, not threaded */                                                                                                                                                                                                                              
      /* fprintf exists,not threaded, (not SINGLEFILE and not FILEID ) */                                                                                                                                                                                           
      /* fprintf exists,not threaded, (not SINGLEFILE and not FILEID ) and not forkfl  */                                                                                                                                                                           
      fprintf(f,s,i);                                                                                                                                                                                                                                               
  } /* end of qqoutput */                                                                                                                                                                                                                                           
    /* ----------------------------------------------------------------------* 215 *                                                                                                                                                                                
     *            qqoutput0                                                                                                                                                                                                                                         
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    static void qqoutput0(FILEPOINT char * s)                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      fprintf(f,s);                                                                                                                                                                                                                                                 
    } /* end of qqoutput0 */                                                                                                                                                                                                                                        
  /* ----------------------------------------------------------------------* 216 *                                                                                                                                                                                  
   *            qqoutput2                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static void qqoutput2(FILEPOINT char * s,int i, int j)                                                                                                                                                                                                          
  {                                                                                                                                                                                                                                                                 
      fprintf(f,s,i,j);                                                                                                                                                                                                                                             
  } /* end of qqoutput2 */                                                                                                                                                                                                                                          
  /* ----------------------------------------------------------------------* 217 *                                                                                                                                                                                  
   *            qqoutput3                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static void qqoutput3(FILEPOINT char * s,int i,int j,int k)                                                                                                                                                                                                     
  {                                                                                                                                                                                                                                                                 
      fprintf(f,s,i,j,k);                                                                                                                                                                                                                                           
  } /* end of qqoutput3 */                                                                                                                                                                                                                                          
  /* ----------------------------------------------------------------------* 218 *                                                                                                                                                                                  
   *            qqoutput4                                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static void qqoutput4(FILEPOINT char * s,int i,int j,int k,int l)                                                                                                                                                                                                 
  {                                                                                                                                                                                                                                                                 
    fprintf(f,s,i,j,k,l);                                                                                                                                                                                                                                           
  } /* end of qqoutput4 */                                                                                                                                                                                                                                          
  /* ----------------------------------------------------------------------* 219 *                                                                                                                                                                                  
   *            end of qqoutput* suite                                                                                                                                                                                                                              
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 222 *                                                                                                                                                                                  
   *            qqqqinitialise                                                                                                                                                                                                                                      
   * This procedure initialises the structures for                                                                                                                                                                                                                  
   * compressed execution histories.                                                                                                                                                                                                                                
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static void qqqqinitialise(int ii)                                                                                                                                                                                                                                
  {                                                                                                                                                                                                                                                                 
    unsigned int i;                                                                                                                                                                                                                                                 
    /* First time through. */                                                                                                                                                                                                                                       
    /* bitmap */                                                                                                                                                                                                                                                    
    /* ----------------------------------------------------------------------* 223 *                                                                                                                                                                                
     * If stdlib is available, register the upload function                                                                                                                                                                                                         
     * using atexit. This should ensure that the stored                                                                                                                                                                                                             
     * execution history is output just before the program finishes.                                                                                                                                                                                                
     * If atexit is not available, the upload should be                                                                                                                                                                                                             
     * done at the end of every instrumented function, in Ggrocers_12zqendz.                                                                                                                                                                                        
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    if (!qqupload_registered)                                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
       qqupload_registered = !atexit (qqqupload);                                                                                                                                                                                                                   
    }                                                                                                                                                                                                                                                               
    for (i=0;i<(qqqbranches/8)+1;i++)                                                                                                                                                                                                                               
    {                                                                                                                                                                                                                                                               
      bitmaparr[i] = 0;                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    /* And so we don't optimise qqqupload() away */                                                                                                                                                                                                                 
    if (bitmaparr[0] != 0)                                                                                                                                                                                                                                          
    {                                                                                                                                                                                                                                                               
      qqqupload();                                                                                                                                                                                                                                                  
    }                                                                                                                                                                                                                                                               
    /* bitmap separate */                                                                                                                                                                                                                                           
    qqqlast = 1; /* stops qqfun() calling initialise again */                                                                                                                                                                                                       
    /* bitmap */                                                                                                                                                                                                                                                    
  } /* end of qqqqinitialise */                                                                                                                                                                                                                                     
#undef QQQTEMP1                                                                                                                                                                                                                                                     
#define QQQTEMP1                                                                                                                                                                                                                                                    
  /* ----------- zqqzqz ---------------------------------------------------* 310 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 312 *                                                                                                                                                                                  
   * This routine opens the execution history file. It is instrumented at the                                                                                                                                                                                       
   * start of the main program if one exists in the file. In general this is                                                                                                                                                                                        
   * superceded by Ggrocers_12zqqzqz1 below.                                                                                                                                                                                                                        
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int Ggrocers_12zqqzqz(qqnull_params)                                                                                                                                                                                                                       
  {                                                                                                                                                                                                                                                                 
    if ( Ggrocers_12zzopen != 1 )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
#undef QQQMUSTOPEN                                                                                                                                                                                                                                                  
      Ggrocers_12zzopen = 1;                                                                                                                                                                                                                                        
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  }  /* end of zqqzqz */                                                                                                                                                                                                                                            
  /* ----------- zqqzqz1 --------------------------------------------------* 315 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 317 *                                                                                                                                                                                  
   * This routine also opens the execution history file.  It is called                                                                                                                                                                                              
   * automatically if a probe fires and the execution history is not already                                                                                                                                                                                        
   * opened (Ggrocers_12zzopen = 0 ).                                                                                                                                                                                                                               
   * Because this always works ( it was intended for files with no main program                                                                                                                                                                                     
   * it is now the de facto common way to open the execution history.                                                                                                                                                                                               
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int Ggrocers_12zqqzqz1(qqnull_params)                                                                                                                                                                                                                      
  {                                                                                                                                                                                                                                                                 
    if ( Ggrocers_12zzopen != 1 )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      if ( Ggrocers_12zzopen == 0 )                                                                                                                                                                                                                                 
      {                                                                                                                                                                                                                                                             
      Ggrocers_12zzhfil =                                                                                                                                                                                                                                           
           fopen( "Ggrocers_12.exh","w");  /* 12 */                                                                                                                                                                                                                 
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
          Ggrocers_12zzhfil =                                                                                                                                                                                                                                       
               fopen( "Ggrocers_12.exh","a");  /* 13 */                                                                                                                                                                                                             
      }                                                                                                                                                                                                                                                             
      qqqqinitialise(0);                                                                                                                                                                                                                                            
      Ggrocers_12zzopen = 1;                                                                                                                                                                                                                                        
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  }  /* end of zqqzqz1 */                                                                                                                                                                                                                                           
  /* ----------- zzqqzz ---------------------------------------------------* 321 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 323 *                                                                                                                                                                                  
   *            This is the routine which usually puts an integer into                                                                                                                                                                                              
   * the execution history file and returns unity.                                                                                                                                                                                                                  
   * This routine is the primary routine for gathering                                                                                                                                                                                                              
   * the execution history. Note that the last entry                                                                                                                                                                                                                
   * is usually inserted by Ggrocers_12zqzqzq.                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int Ggrocers_12zzqqzz(int qqqi)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    if ( Ggrocers_12zzopen != 1 )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      Ggrocers_12zqqzqz1();                                                                                                                                                                                                                                         
    }                                                                                                                                                                                                                                                               
    if ( Ggrocers_12zzopen )                                                                                                                                                                                                                                        
    {                                                                                                                                                                                                                                                               
      /* bitmap   */                                                                                                                                                                                                                                                
      if ( qqqi > 0 )                                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
         /* Standard probe */                                                                                                                                                                                                                                       
        bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zzqqzz */                                                                                                                                                                                                                                             
  /* ----------- zqendz ---------------------------------------------------* 330 *                                                                                                                                                                                  
   * This routine is called on exiting a routine in a                                                                                                                                                                                                               
   * module. It closes the execution history.                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
static int Ggrocers_12zqendz(int qqqi)                                                                                                                                                                                                                              
  {                                                                                                                                                                                                                                                                 
      if ( Ggrocers_12zzopen != 1 )                                                                                                                                                                                                                                 
      {                                                                                                                                                                                                                                                             
        Ggrocers_12zqqzqz1();                                                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      /* ----------------------------------------------------------------------* 331 *                                                                                                                                                                              
       * this is the one which puts an integer into                                                                                                                                                                                                                 
       * the execution history file and returns unity.                                                                                                                                                                                                              
       * The format of each field consists of six columns,                                                                                                                                                                                                          
       * the number is right justified in this field.                                                                                                                                                                                                               
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      if ( Ggrocers_12zzopen )                                                                                                                                                                                                                                      
      {                                                                                                                                                                                                                                                             
        /* uncompressed */                                                                                                                                                                                                                                          
        /* uncompressed unbuffered */                                                                                                                                                                                                                               
      /* uncompressed unbuffered bitmap  */                                                                                                                                                                                                                         
        if ( qqqi > 0 )                                                                                                                                                                                                                                             
        {                                                                                                                                                                                                                                                           
          bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                     
        }                                                                                                                                                                                                                                                           
        else                                                                                                                                                                                                                                                        
        {                                                                                                                                                                                                                                                           
        }                                                                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    /* unbuffered nonsinglefile or mainfl */                                                                                                                                                                                                                        
    /* unbuffered (nonsinglefile or mainfl) bitmap */                                                                                                                                                                                                               
    /* upload the bit map after inserting final entry */                                                                                                                                                                                                            
    if ( qqqi > 0 )                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                         
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
    }                                                                                                                                                                                                                                                               
    /*  clear qqqlast for reentry */                                                                                                                                                                                                                                
  qqqlast = 0;                                                                                                                                                                                                                                                      
    /* If not using atexit to register the bitmap upload                                                                                                                                                                                                            
       function must call upload function here */                                                                                                                                                                                                                   
    if ( ! qqupload_registered )                                                                                                                                                                                                                                    
    {                                                                                                                                                                                                                                                               
      qqqupload();                                                                                                                                                                                                                                                  
      fclose(Ggrocers_12zzhfil);                                                                                                                                                                                                                                    
      Ggrocers_12zzopen = 0;                                                                                                                                                                                                                                        
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zqendz */                                                                                                                                                                                                                                             
 /* ----------------------------------------------------------------------* 336 *                                                                                                                                                                                   
  *            qqqupload                                                                                                                                                                                                                                            
  * This routine loops through the stored bitmap and                                                                                                                                                                                                                
  * outputs it. It then uploads the stored mcdc.                                                                                                                                                                                                                    
  * -----------------------------------------------------------------------------                                                                                                                                                                                   
  */                                                                                                                                                                                                                                                                
  static void qqqupload(qqnull_params)                                                                                                                                                                                                                              
  {                                                                                                                                                                                                                                                                 
    int i;                                                                                                                                                                                                                                                          
    /* uncompressed  bitmap (!singlefile or mainfl) separate */                                                                                                                                                                                                     
  for (i=0;i<(qqqbranches/8)+1;i++)                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      qqoutput(Ggrocers_12zzhfil,                                                                                                                                                                                                                                   
        "%8d\n", bitmaparr[i]);                                                                                                                                                                                                                                     
    }                                                                                                                                                                                                                                                               
     /* bitmap separate */                                                                                                                                                                                                                                          
    qqqlast = 1; /* stops qqfun() calling initialise again */                                                                                                                                                                                                       
  fclose(Ggrocers_12zzhfil);                                                                                                                                                                                                                                        
  Ggrocers_12zzopen = 2;                                                                                                                                                                                                                                            
  } /* end of qqqupload */                                                                                                                                                                                                                                          
  /* ----------- zqzqzq ---------------------------------------------------* 342 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 344 *                                                                                                                                                                                  
   * This routine should be called before the program                                                                                                                                                                                                               
   * terminates. It closes the execution history                                                                                                                                                                                                                    
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int Ggrocers_12zqzqzq(int qqqi)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
      if ( Ggrocers_12zzopen != 1 )                                                                                                                                                                                                                                 
      {                                                                                                                                                                                                                                                             
        Ggrocers_12zqqzqz1();                                                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      /* not compressed */                                                                                                                                                                                                                                          
      /* do nothing for bitmap*/                                                                                                                                                                                                                                    
      /* upload the history */                                                                                                                                                                                                                                      
      /* bitmap */                                                                                                                                                                                                                                                  
      /* uncompressed  bitmap */                                                                                                                                                                                                                                    
      Ggrocers_12zqendz(qqqi);                                                                                                                                                                                                                                      
        /* qqqupload closes the execution history file */                                                                                                                                                                                                           
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zqzqzq */                                                                                                                                                                                                                                             
  /*   the following routines should be left alone */                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 355 *                                                                                                                                                                                  
   *            Ggrocers_12zzzqtz                                                                                                                                                                                                                                   
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is not 0.                                                                                                                                                                                                                 
   *                                                                                                                                                                                                                                                                
   *   qqqa - value of expression                                                                                                                                                                                                                                   
   *   qqqb - jump table index.                                                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int Ggrocers_12zzzqtz(int qqqa, int qqqb)                                                                                                                                                                                                                  
  {                                                                                                                                                                                                                                                                 
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        Ggrocers_12zzqqzz(qqqb) ;                                                                                                                                                                                                                                   
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        Ggrocers_12zzqqzz(qqqb-1);                                                                                                                                                                                                                                  
      }                                                                                                                                                                                                                                                             
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* end of zzzqtz */                                                                                                                                                                                                                                             
  /* ----------------------------------------------------------------------* 356 *                                                                                                                                                                                  
   *            Ggrocers_12zzzqfz                                                                                                                                                                                                                                   
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is 0.                                                                                                                                                                                                                     
   *                                                                                                                                                                                                                                                                
   *  qqqa - value of expression                                                                                                                                                                                                                                    
   *  qqqb - jump table index.                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int Ggrocers_12zzzqfz(int qqqa,int qqqb)                                                                                                                                                                                                                   
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        Ggrocers_12zzqqzz(qqqb-1);                                                                                                                                                                                                                                  
        return(qqqa);                                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        Ggrocers_12zzqqzz(qqqb);                                                                                                                                                                                                                                    
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* zzzqfz */                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 360 *                                                                                                                                                                                  
   *            swzzqqzz                                                                                                                                                                                                                                            
   *  The purpose of this routine is to handle empty cases in switch statements                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int swzzqqzz(int qqqi, int onoff)                                                                                                                                                                                                                          
  {                                                                                                                                                                                                                                                                 
  if ( qqqzzglobflag == 1 || onoff == 1)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    if ( Ggrocers_12zzopen != 1 )                                                                                                                                                                                                                                   
    {                                                                                                                                                                                                                                                               
      Ggrocers_12zqqzqz1();                                                                                                                                                                                                                                         
    }                                                                                                                                                                                                                                                               
    if ( Ggrocers_12zzopen )                                                                                                                                                                                                                                        
    {                                                                                                                                                                                                                                                               
      if ( qqqi > 0 )                                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
        bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    if ( qqqzzglobflag == 1 )                                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      qqqzzglobflag = 0;                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      qqqzzglobflag = 1;                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
  }                                                                                                                                                                                                                                                                 
    return(1);                                                                                                                                                                                                                                                      
  } /* end of swzzqqzz */                                                                                                                                                                                                                                           
/* END OF TESTBED INSTRUMENTATION */                                                                                                                                                                                                                                
 
