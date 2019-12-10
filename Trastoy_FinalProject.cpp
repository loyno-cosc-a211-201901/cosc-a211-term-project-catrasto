// Basic Child Medical Library
// A basic library for parents to look into commons illnesses based on the age group of their child
// Christian Trastoy
// Dec. 9, 2019

#include <iostream>
using namespace std;

int main()
{
    //variables 
    string ageGroup;
    string finalAnswer;
    string choiceFinalAnswer;
    string infantChoice;
    string childChoice;
    string teenChoice;

    cout << "Welcome to the Basic Child Medical Library!" << endl;

    childAge:
    cout << "Which of the following Age groups is your child in? (Choose 1-4)" << endl;
    cout << "1 - Infant (Ages 0 - 3 years)" << endl;
    cout << "2 - Children (Ages 4 - 11 years)" << endl;
    cout << "3 - Teen (Ages 12 -19 years)" << endl;
    cout << "4 - Quit Program" << endl;
    cin >> ageGroup;
    cout << endl;

    for( ; ; )
    {
        if (ageGroup == "1")
        {
            // infant
            infantChoices:
            cout << "Of the following common illnesses for infants, pick one. (Choose 1 - 6)" << endl;
            cout << "1 - Common Cold" << endl;
            cout << "2 - Ear Infection" << endl;
            cout << "3 - Flu" << endl;
            cout << "4 - Group B Strep" << endl;
            cout << "5 - Go Back to Age Groups" << endl;
            cout << "6 - Quit Program" << endl;
            cin >> infantChoice;
            cout << endl;

            if (infantChoice == "1")
            {
                // Common Cold
                cold:
                cout << "Common Cold" << endl;
                cout << "Symptons: " << endl;
                cout << "Sneezing, Stuffy nose, Runny nose, " << endl;
                cout << "Sore throat, Coughing, post-nasal drip" << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "Difficulty breathing or fast breathing, Dehydration, " << endl;
                cout << "Fever that lasts longer than 4 days" << endl;
                cout << "Symptoms that last more than 10 days without improvement" << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto infantChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromCold:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto cold;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromCold;
                        cout << endl;
                    }
                }

            }
            else if (infantChoice == "2")
            {
                // Ear Infection
                ear:
                cout << "Ear Infection" << endl;
                cout << "Symptons: " << endl;
                cout << "Ear pain, Fever, Fussiness or irritability, " << endl;
                cout << "Rubbing or tugging at an ear, Difficulty sleeping" << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "Pus, discharge, or fluid coming from the ear, " << endl;
                cout << "Worsening symptoms,Hearing loss" << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto infantChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromEar:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto ear;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromEar;
                        cout << endl;
                    }
                }

            }
            else if (infantChoice == "3")
            {
                // Flu
                flu:
                cout << "Flu" << endl;
                cout << "Symptons: " << endl;
                cout << "Fever, cough, sore throat, " << endl;
                cout << "Runny nose, headaches " << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "Fever gets worse, symptoms dont improve, " << endl;
                cout << "pain is concentrated in one area, cough worsens " << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto infantChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromFlu:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto flu;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromFlu;
                        cout << endl;
                    }
                }

            }
            else if (infantChoice == "4")
            {
                // Group B Strep
                strep:
                cout << "Group B Strep" << endl;
                cout << "Symptons: " << endl;
                cout << "Fever, difficulty breathing, irritability, " << endl;
                cout << "lethargy, post-nasal drip" << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "As soon as possible, strep can lead to deathly illnesses in children" << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto infantChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromStrep:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto strep;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromStrep;
                        cout << endl;
                    }
                }

            }
            else if (infantChoice == "5")
            {
                // Back to Age Groups
                goto childAge;
            }
            else if (infantChoice == "6")
            {
                // Quit Program
                quitFromInfant:
                cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                cout << "1 - Yes!" << endl;
                cout << "2 - No, take me back!" << endl;
                cin >> finalAnswer;
                cout << endl;

                if (finalAnswer == "1")
                {
                    return 0;
                }
                else if (finalAnswer == "2")
                {
                    goto infantChoices;
                }
                else 
                {
                    cout << "Invalid choice. Please try again." << endl;
                    goto quitFromInfant;
                    cout << endl;
                }
            }
            else
            {
                // For any other submission
                cout << "Invalid choice. Please try again." << endl;
                goto infantChoices;
                cout << endl;
            }
            
        }
        else if (ageGroup == "2")
        {
            // children
            childChoices:
            cout << "Of the following common illnesses for children, pick one. (Choose 1 - 6)" << endl;
            cout << "1 - ADD or ADHD" << endl;
            cout << "2 - Asthma" << endl;
            cout << "3 - Chickenpox" << endl;
            cout << "4 - Flu" << endl;
            cout << "5 - Go back to Age Groups" << endl;
            cout << "6 - Quit Program" << endl;
            cin >> childChoice;
            cout << endl;

            if (childChoice == "1")
            {
                // ADD or ADHD
                ADD:
                cout << "ADD or ADHD" << endl;
                cout << "Symptons: " << endl;
                cout << "Difficulty concentrating on daily tasks, " << endl;
                cout << "Difficulty standing still ot standing through long events" << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "Whenever the patient or parent is concerned and/or ready" << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto childChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromADD:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto ADD;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromADD;
                        cout << endl;
                    }
                }

            }
            else if (childChoice == "2")
            {
                // Asthma
                asthma:
                cout << "Asthma" << endl;
                cout << "Symptons: " << endl;
                cout << "Shortness of breath, chest tightness or pain, " << endl;
                cout << "Wheezing, trouble sleeping" << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "Asthma is a life-threatening illness and should be checked" << endl;
                cout << "as soon as possible" << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto childChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromAsthma:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto asthma;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromAsthma;
                        cout << endl;
                    }
                }

            }
            else if (childChoice == "3")
            {
                // Chickenpox
                chickenpox:
                cout << "Chickenpox" << endl;
                cout << "Symptons: " << endl;
                cout << "Fever, tiredness, " << endl;
                cout << "loss of appetite, headache" << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "Chickenpox can be prevented with the chickenpox vaccine" << endl;
                cout << "Go to your doctor as soon as possible: lotion may soothe skin iritation" << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto childChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromChickenpox:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto chickenpox;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromChickenpox;
                        cout << endl;
                    }
                }

            }
            else if (childChoice == "4")
            {
                // Flu
                flu2:
                cout << "Flu" << endl;
                cout << "Symptons: " << endl;
                cout << "Fever, cough, sore throat, " << endl;
                cout << "Runny nose, headaches " << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "Fever gets worse, symptoms dont improve, " << endl;
                cout << "pain is concentrated in one area, cough worsens " << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto childChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromFlu2:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto flu2;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromFlu2;
                        cout << endl;
                    }
                }

            }
            else if (childChoice == "5")
            {
                // Back to Age Groups
                goto childAge;
            }
            else if (childChoice == "6")
            {
                // Quit Program
                quitFromChild:
                cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                cout << "1 - Yes!" << endl;
                cout << "2 - No, take me back!" << endl;
                cin >> finalAnswer;
                cout << endl;

                if (finalAnswer == "1")
                {
                    return 0;
                }
                else if (finalAnswer == "2")
                {
                    goto childChoices;
                }
                else 
                {
                    cout << "Invalid choice. Please try again." << endl;
                    goto quitFromChild;
                    cout << endl;
                }
            }
            else
            {
                // For any other submission
                cout << "Invalid choice. Please try again." << endl;
                goto childChoices;
                cout << endl;
            }
        }
        else if (ageGroup == "3")
        {
            // teen
            teenChoices:
            cout << "Of the following common illnesses for teens, pick one. (Choose 1 - 6)" << endl;
            cout << "1 - Cervical Cancer" << endl;
            cout << "2 - Meningitis" << endl;
            cout << "3 - Obesity" << endl;
            cout << "4 - Sexually Transmitted Diseases (STDS)" << endl;
            cout << "5 - Go back to Age Groups" << endl;
            cout << "6 - Quit Program" << endl;
            cin >> teenChoice;
            cout << endl;

            if (teenChoice == "1")
            {
                // Cervical Cancer
                cervical:
                cout << "Cervical Cancer" << endl;
                cout << "Symptons: " << endl;
                cout << "Uncommon bleeding or discharge" << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "When uncommon bleeding or discharge occurs often" << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto teenChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromCervical:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto cervical;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromCervical;
                        cout << endl;
                    }
                }

            }
            else if (teenChoice == "2")
            {
                // Meningitis 
                meningitis:
                cout << "Meningitis" << endl;
                cout << "About: " << endl;
                cout << "Meningitis is an inflammation (swelling) of the protective " << endl;
                cout << "membranes covering the brain and spinal cord. A bacterial " << endl;
                cout << "or viral infection of the fluid surrounding the brain and " << endl;
                cout << "spinal cord usually causes the swelling." << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "Immediate Medical Attention is Required" << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto teenChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromMen:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto meningitis;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromMen;
                        cout << endl;
                    }
                }

            }
            else if (teenChoice == "3")
            {
                // Obesity
                obesity:
                cout << "Obesity" << endl;
                cout << "Symptons: " << endl;
                cout << "Breathlessness, increased sweating, " << endl;
                cout << "Snoring, back and joint pains" << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "Immediate Medical Attention is Required" << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto teenChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromObesity:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto obesity;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromObesity;
                        cout << endl;
                    }
                }

            }
            else if (teenChoice == "4")
            {
                // Sexually Transmitted Diseases (STDS)
                std:
                cout << "Sexually Transmitted Diseases (STDS)" << endl;
                cout << "Symptons: " << endl;
                cout << "Bumps, sores, warts near mouth, " << endl;
                cout << "Skin rash, painful urination" << endl;
                cout << endl;
                cout << "When to Seek Medical Care: " << endl;
                cout << "Immediate Medical Attention is Required" << endl;
                cout << endl;
                cout << "Choose one of the following: " << endl;
                cout << "1 - Go Back" << endl;
                cout << "2 - Go Back to Age Groups" << endl;
                cout << "3 - Quit Program" << endl;
                cin >> choiceFinalAnswer;

                if (choiceFinalAnswer == "1")
                {
                    // Go Back
                    goto teenChoices;
                }
                else if (choiceFinalAnswer == "2")
                {
                    // Go Back to Age Groups
                    goto childAge;
                }
                else if (choiceFinalAnswer == "3")
                {
                    // Quit Program
                    quitFromSTD:
                    cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                    cout << "1 - Yes!" << endl;
                    cout << "2 - No, take me back!" << endl;
                    cin >> finalAnswer;
                    cout << endl;

                    if (finalAnswer == "1")
                    {
                        return 0;
                    }
                    else if (finalAnswer == "2")
                    {
                        goto std;
                    }
                    else 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        goto quitFromSTD;
                        cout << endl;
                    }
                }

            }
            else if (teenChoice == "5")
            {
                // Back to Age Groups
                goto childAge;
            }
            else if (teenChoice == "6")
            {
                // Quit Program
                quitFromTeen:
                cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
                cout << "1 - Yes!" << endl;
                cout << "2 - No, take me back!" << endl;
                cin >> finalAnswer;
                cout << endl;

                if (finalAnswer == "1")
                {
                    return 0;
                }
                else if (finalAnswer == "2")
                {
                    goto teenChoices;
                }
                else 
                {
                    cout << "Invalid choice. Please try again." << endl;
                    goto quitFromTeen;
                    cout << endl;
                }
            }
            else
            {
                // For any other submission
                cout << "Invalid choice. Please try again." << endl;
                goto teenChoices;
                cout << endl;
            }
        }
        else if (ageGroup == "4")
        {
            // quit program
            quitFromAge:
            cout << "Are you sure you want to quit this program? (Choose 1 or 2)" << endl;
            cout << "1 - Yes!" << endl;
            cout << "2 - No, take me back!" << endl;
            cin >> finalAnswer;
            cout << endl;

            if (finalAnswer == "1")
            {
                return 0;
            }
            else if (finalAnswer == "2")
            {
                goto childAge;
            }
            else 
            {
                cout << "Invalid choice. Please try again." << endl;
                goto quitFromAge;
                cout << endl;
            }
        }
        else 
        {
            cout << "Invalid choice. Please try again." << endl;
            goto childAge;
            cout << endl;
        }
    }
}