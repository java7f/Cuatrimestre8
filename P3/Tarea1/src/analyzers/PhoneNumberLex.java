package analyzers;

public class PhoneNumberLex {

    short currentState;

    public PhoneNumberLex()
    {
        currentState = 0;
    }

    public boolean analyzePhone(String phone)
    {
        currentState = 0;

        if(phone.length() > 14)
            return false;

        for(int i = 0; i < phone.length(); i++)
        {
            switch (currentState)
            {
                case 0:
                {
                    if (phone.charAt(i) == '+')
                        currentState = 1;
                    break;
                }
                case 1:
                {
                    if (phone.charAt(i) == '1')
                        currentState = 2;
                    break;
                }
                case 2:
                {
                    if (phone.codePointAt(i) == '-'){
                        currentState = 3;
                    }
                    break;
                }
                case 3:
                {
                    if (phone.codePointAt(i) == '8')
                        currentState = 4;
                    break;
                }
                case 4:
                {
                    if (phone.charAt(i) == '0' || phone.codePointAt(i) == '2' || phone.codePointAt(i) == '4')
                        currentState = 5;
                    break;
                }
                case 5:
                {
                    if (phone.codePointAt(i) == '9')
                        currentState = 6;
                    break;
                }
                case 6:
                {
                    if (phone.codePointAt(i) == '-')
                        currentState = 7;
                    break;
                }
                case 7:
                {
                    if (phone.codePointAt(i) >= 48 && phone.codePointAt(i) <= 57)
                        currentState = 8;
                    break;
                }
                case 8:
                {
                    if (phone.codePointAt(i) >= 48 && phone.codePointAt(i) <= 57)
                        currentState = 9;
                    break;
                }
                case 9:
                {
                    if (phone.codePointAt(i) >= 48 && phone.codePointAt(i) <= 57)
                        currentState = 10;
                    break;
                }
                case 10:
                {
                    if (phone.codePointAt(i) >= 48 && phone.codePointAt(i) <= 57)
                        currentState = 11;
                    break;
                }
                case 11:
                {
                    if (phone.codePointAt(i) >= 48 && phone.codePointAt(i) <= 57)
                        currentState = 12;
                    break;
                }
                case 12:
                {
                    if (phone.codePointAt(i) >= 48 && phone.codePointAt(i) <= 57)
                        currentState = 13;
                    break;
                }
                case 13:
                {
                    if (phone.codePointAt(i) >= 48 && phone.codePointAt(i) <= 57)
                        currentState = 14;
                    break;
                }
                default:
                {
                    break;
                }
            }
        }
        return currentState == 14;
    }
}
