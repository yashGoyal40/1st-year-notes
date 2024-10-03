/*
DataMember     Mode           InChild
public     ->  public     ->  public
public     ->  protected  ->  protected
public     ->  private    ->  private
protected  ->  public     ->  protected
protected  ->  protected  ->  protected
protected  ->  private    ->  private
private    ->  public     ->  NA
private    ->  protected  ->  NA
private    ->  private    ->  NA
*/


//private data member of any class can not be accessed 

//behaviour of private and progtected is same but a private data member can not be inherited 

//protected can bee inherited but can not be accessed direcly 

//protected can not be inherited in private mode 

//public can easily be accessed direcly and even inherited  in whatever mode we want 