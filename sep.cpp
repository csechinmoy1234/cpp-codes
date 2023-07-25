
  int t;
    cin>>t;
    while (t--)
    {
        float A,X,B,Y;
        cin>>A>>X>>B>>Y;
        float z;
        z = A/X;
        float n;
        n = B/Y ;
        if (z>n)
        {
            cout<<"ALICE"<<endl;
        }
        
        else if (z==n)
        {
            cout<<"EQUAL"<<endl;
        }
        else 
        
            cout<<"BOB"<<endl;
        }
        
    }
}