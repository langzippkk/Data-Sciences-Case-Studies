## Attributes

['id', 'log_price', 'property_type', 'room_type', 'amenities',
       'accommodates', 'bathrooms', 'bed_type', 'cancellation_policy',
       'cleaning_fee', 'city', 'description', 'first_review',
       'host_has_profile_pic', 'host_identity_verified', 'host_response_rate',
       'host_since', 'instant_bookable', 'last_review', 'latitude',
       'longitude', 'name', 'neighbourhood', 'number_of_reviews',
       'review_scores_rating', 'thumbnail_url', 'zipcode', 'bedrooms', 'beds']


## Basic Version - v1

Files Inclusive: 
```
AirBNB EDA_v1.1
AirBNB EDA_v1.2

AirBnb Modelv1.1

Output - v1.1_data.csv
         v1.2_train.csv
         v1.2_test.csv
```

Algorithm Summary:
```
1. Drop Columns - ['id', 'description', 'first_review', 'host_response_rate', \
                      'host_since', 'last_review', 'latitude', 'longitude',\
                      'name', 'neighbourhood', 'thumbnail_url', 'zipcode']
2. Imputation -
    * LOGIC - Number of bedrooms = bathrooms and vice versa.
    * If verified: Profile pic must be present.
      If not verified: 
            if profile pic present: put the same in verified col.
    * Logic - If No. of reviews = 0 then, Review Scores Rating = 0.
    
    Drop the rest of the rows containing missing values.
    
3. Type Conversion
4. Standardization - Not Needed here
5. Binning
6. Dummy Creation
    * This is only a transformation step which can be applied before splitting them.
    * property_type, room_type, bed_type, cancellation_policy, cleaning_fee, city, host_has_profile_pic, host_identity_verified, instant_bookable
    
7. Test/Train Data Split
```
