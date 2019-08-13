## Attributes

['id', 'log_price', 'property_type', 'room_type', 'amenities',
       'accommodates', 'bathrooms', 'bed_type', 'cancellation_policy',
       'cleaning_fee', 'city', 'description', 'first_review',
       'host_has_profile_pic', 'host_identity_verified', 'host_response_rate',
       'host_since', 'instant_bookable', 'last_review', 'latitude',
       'longitude', 'name', 'neighbourhood', 'number_of_reviews',
       'review_scores_rating', 'thumbnail_url', 'zipcode', 'bedrooms', 'beds']


## v1

```
1. Drop Columns - ['id', 'description', 'first_review', 'host_response_rate', \
                      'host_since', 'last_review', 'latitude', 'longitude',\
                      'name', 'neighbourhood', 'thumbnail_url', 'zipcode']
2. Type Conversion
3. Imputation -
    * LOGIC - Number of bedrooms = bathrooms and vice versa.
    * If verified: Profile pic must be present.
      If not verified: 
            if profile pic present: put the same in verified col.
    * Logic - If No. of reviews = 0 then, Review Scores Rating = 0.
    
    Drop the rest of the rows containing missing values.
    
4. Standardization
5. Binning
6. Dummy Creation
```


```

```

