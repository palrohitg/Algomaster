import copy


def test():
    questions = {
        "id": "question_id",
        "order": 2342,
        "question": "question",
        "options": [],
        "background_img": "bg_img",
        "parent_id": "ff3ce6ed-7661-4cfa-8090-40b3090fb7c9",
    }
    response = [
        {
            "_index": "question_index",
            "_type": "question",
            "_id": "quiz_quiz1177_1",
            "_score": 1.0,
            "_source": {
                "question_text": " How many rings are there in the Audi logo?",
                "updated_at": "2023-07-27T20:06:21.545698036+05:30",
                "question_type": "",
                "options": [
                    {"option_text": "Five rings", "votes": 4044, "id": "3800"},
                    {"option_text": "Three rings", "votes": 3100, "id": "3801"},
                    {"option_text": "Six rings", "votes": 575, "id": "3802"},
                    {"option_text": "Four rings", "votes": 28332, "id": "3803"},
                ],
                "created_at": "2023-07-27T20:06:21.545697546+05:30",
                "correct_option_id": "3803",
            },
        },
        {
            "_index": "question_index",
            "_type": "question",
            "_id": "quiz_quiz1293_1",
            "_score": 1.0,
            "_source": {
                "question_text": """What does "4x4" refer to in relation to vehicles?""",
                "updated_at": "2023-08-09T16:49:31.925805104+05:30",
                "question_type": "",
                "options": [
                    {
                        "option_text": "Four doors and four seats",
                        "votes": 3498,
                        "id": "4266",
                    },
                    {"option_text": "Four exhaust pipes\n", "votes": 861, "id": "4267"},
                    {"option_text": "Four-wheel drive\n", "votes": 30129, "id": "4268"},
                    {
                        "option_text": "Four-cylinder engine",
                        "votes": 1861,
                        "id": "4269",
                    },
                ],
                "created_at": "2023-08-09T16:49:31.925804764+05:30",
                "correct_option_id": "4268",
            },
        },
        {
            "_index": "question_index",
            "_type": "question",
            "_id": "quiz_quiz207_1",
            "_score": 1.0,
            "_source": {
                "question_text": "Petrol and Diesel are made from _ ",
                "updated_at": "2023-05-10T13:13:28.311434152+05:30",
                "question_type": "",
                "options": [
                    {"option_text": "Natural Gas ", "votes": 2732, "id": "604"},
                    {"option_text": " Vegetable oil ", "votes": 1608, "id": "605"},
                    {"option_text": " Petroleum", "votes": 12735, "id": "606"},
                ],
                "created_at": "2023-01-07T18:58:44.055649961+05:30",
                "correct_option_id": "606",
            },
        },
        {
            "_index": "question_index",
            "_type": "question",
            "_id": "quiz_quiz1221_1",
            "_score": 1.0,
            "_source": {
                "question_text": "Guess the Car in this image?",
                "updated_at": "2023-08-23T18:50:03.00796284+05:30",
                "question_type": "",
                "options": [
                    {"option_text": "Honda WRV", "votes": 3318, "id": "3976"},
                    {"option_text": "Toyota Etios", "votes": 1861, "id": "3977"},
                    {"option_text": "Tata Altroz", "votes": 5100, "id": "3978"},
                    {"option_text": "Hyundai i20", "votes": 23857, "id": "3979"},
                ],
                "created_at": "2023-08-02T18:50:39.241001888+05:30",
                "correct_option_id": "3979",
            },
        },
        {
            "_index": "question_index",
            "_type": "question",
            "_id": "quiz_quiz828_1",
            "_score": 1.0,
            "_source": {
                "question_text": "Guess this 4x4 SUV in the picture: ",
                "updated_at": "2023-06-21T16:41:52.266581462+05:30",
                "question_type": "",
                "options": [
                    {
                        "option_text": """

Thar   

""",
                        "votes": 2065,
                        "id": "2566",
                    },
                    {"option_text": "Bolero   \n", "votes": 40795, "id": "2565"},
                    {"option_text": "Sumo", "votes": 2333, "id": "2567"},
                ],
                "created_at": "2023-06-21T15:55:31.904052437+05:30",
                "correct_option_id": "2565",
            },
        },
    ]
    ques = []
    for r in response:
        q = copy.deepcopy(questions)
        question_id = r["_id"]
        question = r["_source"]["question_text"]
        bg_img = ""
        option = []
        for o in r["_source"]["options"]:
            option.append(
                {
                    "id": int(o["id"]),
                    "text": o["option_text"],
                    "is_correct": True
                    if r["_source"]["correct_option_id"] == o["id"]
                    else False,
                }
            )
        q["id"] = question_id
        q["question"] = question
        q["options"] = option
        ques.append(q)
    return ques
  
print(test())