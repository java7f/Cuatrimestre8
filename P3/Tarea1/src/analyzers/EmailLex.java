package analyzers;

public class EmailLex {

    short currentState;
    String name, domain;

    public EmailLex()
    {
        currentState = 0;
        name = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_-.";
        domain = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }

    public boolean analyzeEmail(String email)
    {
        currentState = 0;
        for(int i = 0; i < email.length(); i++)
        {
            switch (currentState)
            {
                case 0:
                {
                    if (name.indexOf(email.charAt(i)) > -1)
                        currentState = 1;
                    break;
                }
                case 1:
                {
                    if (name.indexOf(email.charAt(i)) > -1)
                        currentState = 1;
                    else if(email.charAt(i) == '@')
                        currentState = 2;
                    break;
                }
                case 2:
                {
                    if(domain.indexOf(email.charAt(i)) > -1){
                        currentState = 3;
                    }
                    else if(email.charAt(i) == '.')
                        return false;
                    break;
                }
                case 3:
                {
                    if (domain.indexOf(email.charAt(i)) > -1)
                        currentState = 3;
                    else if(email.charAt(i) == '.')
                    {
                        currentState = 4;
                    }
                    break;
                }
                case 4:
                {
                    if (domain.indexOf(email.charAt(i)) > -1)
                        currentState = 5;
                    else if(email.charAt(i) == '.')
                        return false;
                    break;
                }
                default:
                {
                    if (domain.indexOf(email.charAt(i)) > -1)
                        currentState = 5;
                    else if(email.charAt(i) == '.')
                        currentState = 4;
                    break;
                }
            }
        }
        return currentState == 5;
    }
}
