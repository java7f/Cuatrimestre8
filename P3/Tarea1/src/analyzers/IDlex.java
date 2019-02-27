package analyzers;

public class IDlex {

    short currentState;

    public IDlex()
    {
        currentState = 0;
    }

    public boolean analyzeID(String id)
    {
        currentState = 0;
        if(id.length() > 9)
            return false;

        for(int i = 0; i < id.length(); i++)
        {
            switch (currentState)
            {
                case 0:
                {
                    if (id.codePointAt(i) >= 50 && id.codePointAt(i) <= 57)
                        currentState = 1;
                    break;
                }
                case 1:
                {
                    if (id.codePointAt(i) >= 48 && id.codePointAt(i) <= 57)
                        currentState = 2;
                    break;
                }
                case 2:
                {
                    if ((id.codePointAt(i) < 48 || id.codePointAt(i) > 57) && id.codePointAt(i) != '-'){

                    }
                    else if(id.codePointAt(i) == '-')
                        currentState = 5;
                    else
                        currentState = 3;
                    break;
                }
                case 3:
                {
                    if (id.codePointAt(i) >= 48 && id.codePointAt(i) <= 57)
                        currentState = 4;
                    break;
                }
                case 4:
                {
                    if (id.charAt(i) == '-')
                        currentState = 5;
                    break;
                }
                case 5:
                {
                    if (id.codePointAt(i) >= 48 && id.codePointAt(i) <= 57)
                        currentState = 6;
                    break;
                }
                case 6:
                {
                    if (id.codePointAt(i) >= 48 && id.codePointAt(i) <= 57)
                        currentState = 7;
                    break;
                }
                case 7:
                {
                    if (id.codePointAt(i) >= 48 && id.codePointAt(i) <= 57)
                        currentState = 8;
                    break;
                }
                case 8:
                {
                    if (id.codePointAt(i) >= 48 && id.codePointAt(i) <= 57)
                        currentState = 9;
                    break;
                }
                default:
                {
                    break;
                }
            }
        }
        return currentState == 9;
    }

}
