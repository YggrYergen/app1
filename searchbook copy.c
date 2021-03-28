int main()
{

    struct managementtool
    {
        char artikel[200];
        int anzahl;
    };

    //wh = warehouse

    struct managementtool **wh = malloc(200 * sizeof(struct managementtool *));

    for (int i = 0; i < 200; i++)
    {
        wh[i] = malloc(sizeof(struct managementtool));
    }

    printf("Welcome to Warehouse Management 97\n\n\nWhat do you want to do ?\n");

    int x, v, f, i, exit, all, end, a, b;

    char ques, find, nu1;

    do
    {
        i = 0;
        printf("\n(1)Add article\n(2)Edit article.\n(3)Search entry.\n(4)Show stock.\n(5)Exit\n");
        scanf("%x", &x);

        switch (x)
        {
        case 1: //add
            do
            {

                printf("\nEnter the product name:  ");
                scanf("%s", wh[f]->artikel);

                printf("\nAmount of products:  ");
                scanf("%i", &wh[f]->anzahl);

                printf("\n\nAdd another product ? (Y/N)");
                // add a space before % to skip leading whitespace
                scanf(" %c", &ques);
                f++;
                switch (ques)
                {
                case 'Y':
                    v++;
                    break;
                case 'N':
                    end = 1;
                    v = 0;
                    break;
                default:
                    printf("Wrong entry\n");
                    break;
                }
            } while (end != 1);
            if (v >= 2)
            {
                printf("Product added successfully\n\n");
            }
            else
            {
                printf("Products have been successfully added\n\n");
            }
            break;

        case 2: //edit
            printf("Which article do you want to edit?");
            fflush(stdin);
            scanf("%s", &find);
            for (a = 0; a < f; a++)
            {
                if (&find == wh[a]->artikel)
                {
                    b = a;
                }
            }
            if (b == 0)
            {
                printf("Article not found");
            }
            printf("f: %i, b:%i", f, b);
            puts(wh[b]->artikel);
            printf("Amount: %d\n", wh[b]->anzahl);

            break;
        case 3: //search
            break;
        case 4: //Spam-it

            while (i < f)
            {
                printf("\nProduct number %i\n", i + 1);
                printf("Name: ");
                puts(wh[i]->artikel);
                printf("Amount: %d\n", wh[i]->anzahl);
                i++;
            }
            printf("\nTotal amount of Items: %i", all);
            break;
        case 5: //go away
            printf("Goodbye :)");
            exit = 1;
            break;
        default: //well
            printf("Wrong Input\n");
            break;
        }
        all = 0;
        while (i < f)
        {

            all += wh[i]->anzahl;
            i++;
        }
    } while (exit == 0);
}