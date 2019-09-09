#include<stdio.h>
#include<fstream>
#include<string.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream infile;
    cout << "yaya";
    infile.open("..\\0.data\\raw\\imdb_train.csv", ios::in);

    vector<vector<string> > train;
    string temp;

    while(infile >> temp){
        cout << "insid "<< endl;
        vector<string> row;
        string line, word;

        getline(infile, line);
    cout << line << endl;
        stringstream s(line);

        while(getline(s, word, ',')){
            cout << word << endl;
//            row.push_back(word);
        }
        cout << row[1] << endl;
        train.push_back(row);
    }

    cout << train[1][0] << endl;
    return 0;
}

// std::string filename;
// std::string row;

// std::vector

// train = pd.read_csv('..\\0.data\\raw\\imdb_train.csv')
// print(len(train))
// print(train.head())

// test = pd.read_csv('..\\0.data\\raw\\imdb_test.csv')
// print(len(test))
// print(test.head())

// from nltk.tokenize import RegexpTokenizer
// from nltk import stem

// def clean_paragraph(para):
//     lmtzr = stem.WordNetLemmatizer()
//     tokenizer = RegexpTokenizer(r'\w+')

//     p = ' '.join([lmtzr.lemmatize(token.lower()) for token in tokenizer.tokenize(para)])

//     return p

// import time; t0 = time.time()

// train.text = [clean_paragraph(para) for para in train.text]

// print(time.time() - t0)

// print(train.text[0])


// ## Create Classes and Assign Probabilities
// '''Find probabilites of each class'''

// print(train.labels.value_counts())

// prob_of_each_class = []
// totalDocCount = len(train)

// for a in train.labels.value_counts():
//     prob_of_each_class.append(float(a/totalDocCount))

// prob_of_each_class = pd.Series(prob_of_each_class)
// print(prob_of_each_class); print(prob_of_each_class.sum())


// ## Create Word Matrix
// '''Get Unique Words from the text data'''

// tokenDict = {}
// i = 0
// for row in train.text:
//     for token in row.split(' '):
//         if tokenDict.get(token) == None:
//             tokenDict[token] = i
//             i = i + 1
//         else:
//             continue

// print(len(tokenDict))

// ## Initialize Matrix
// from scipy.sparse import coo_matrix
// import numpy as np

// matrix = coo_matrix((3, 58535))
// matrix = matrix.tocsr()
// print(matrix)


// '''Fill the Matrix'''

// for index, row in train.iterrows():
//     for token in row['text'].split(' '):
//         matrix[row['labels'], tokenDict[token]] = matrix[row['labels'], tokenDict[token]] + 1
//         matrix[2, tokenDict[token]] = matrix[2, tokenDict[token]] + 1

// '''Verify Matrix'''
// print(matrix[:, 0])
// print(matrix[:, 0].sum())
