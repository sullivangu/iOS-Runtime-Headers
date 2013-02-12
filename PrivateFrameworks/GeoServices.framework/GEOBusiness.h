/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSMutableArray, NSString;

@interface GEOBusiness : PBCodable {
    struct { 
        unsigned int uID : 1; 
        unsigned int totalNumberOfPhotos : 1; 
        unsigned int version : 1; 
        unsigned int canBeCorrectedByBusinessOwner : 1; 
        unsigned int isClosed : 1; 
        unsigned int isUnverified : 1; 
    NSMutableArray *_attributeKeyValues;
    NSMutableArray *_attributions;
    BOOL _canBeCorrectedByBusinessOwner;
    NSMutableArray *_categorys;
    GEOLatLng *_center;
    } _has;
    BOOL _isClosed;
    BOOL _isUnverified;
    NSMutableArray *_localizedCategories;
    NSString *_mapsURL;
    NSString *_name;
    NSString *_notice;
    NSMutableArray *_openHours;
    NSString *_phoneticName;
    NSString *_phoneticNotice;
    NSMutableArray *_photos;
    NSMutableArray *_ratings;
    NSMutableArray *_sources;
    NSMutableArray *_starRatings;
    NSString *_telephone;
    unsigned int _totalNumberOfPhotos;
    unsigned long long _uID;
    NSString *_uRL;
    int _version;
}

@property(retain) NSMutableArray * attributeKeyValues;
@property(retain) NSMutableArray * attributions;
@property BOOL canBeCorrectedByBusinessOwner;
@property(retain) NSMutableArray * categorys;
@property(retain) GEOLatLng * center;
@property BOOL hasCanBeCorrectedByBusinessOwner;
@property(readonly) BOOL hasCenter;
@property BOOL hasIsClosed;
@property BOOL hasIsUnverified;
@property(readonly) BOOL hasMapsURL;
@property(readonly) BOOL hasName;
@property(readonly) BOOL hasNotice;
@property(readonly) BOOL hasPhoneticName;
@property(readonly) BOOL hasPhoneticNotice;
@property(readonly) BOOL hasTelephone;
@property BOOL hasTotalNumberOfPhotos;
@property BOOL hasUID;
@property(readonly) BOOL hasURL;
@property BOOL hasVersion;
@property BOOL isClosed;
@property BOOL isUnverified;
@property(retain) NSMutableArray * localizedCategories;
@property(retain) NSString * mapsURL;
@property(retain) NSString * name;
@property(retain) NSString * notice;
@property(retain) NSMutableArray * openHours;
@property(retain) NSString * phoneticName;
@property(retain) NSString * phoneticNotice;
@property(retain) NSMutableArray * photos;
@property(retain) NSMutableArray * ratings;
@property(retain) NSMutableArray * sources;
@property(retain) NSMutableArray * starRatings;
@property(retain) NSString * telephone;
@property unsigned int totalNumberOfPhotos;
@property unsigned long long uID;
@property(retain) NSString * uRL;
@property int version;

- (void)addAttributeKeyValue:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addCategory:(id)arg1;
- (void)addLocalizedCategories:(id)arg1;
- (void)addOpenHours:(id)arg1;
- (void)addPhoto:(id)arg1;
- (void)addRating:(id)arg1;
- (void)addSource:(id)arg1;
- (void)addStarRating:(id)arg1;
- (id)attributeKeyValueAtIndex:(unsigned int)arg1;
- (id)attributeKeyValues;
- (unsigned int)attributeKeyValuesCount;
- (id)attributionAtIndex:(unsigned int)arg1;
- (id)attributions;
- (unsigned int)attributionsCount;
- (BOOL)canBeCorrectedByBusinessOwner;
- (id)categoryAtIndex:(unsigned int)arg1;
- (id)categorys;
- (unsigned int)categorysCount;
- (id)center;
- (void)clearAttributeKeyValues;
- (void)clearAttributions;
- (void)clearCategorys;
- (void)clearLocalizedCategories;
- (void)clearOpenHours;
- (void)clearPhotos;
- (void)clearRatings;
- (void)clearSources;
- (void)clearStarRatings;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCanBeCorrectedByBusinessOwner;
- (BOOL)hasCenter;
- (BOOL)hasIsClosed;
- (BOOL)hasIsUnverified;
- (BOOL)hasMapsURL;
- (BOOL)hasName;
- (BOOL)hasNotice;
- (BOOL)hasPhoneticName;
- (BOOL)hasPhoneticNotice;
- (BOOL)hasTelephone;
- (BOOL)hasTotalNumberOfPhotos;
- (BOOL)hasUID;
- (BOOL)hasURL;
- (BOOL)hasVersion;
- (unsigned int)hash;
- (BOOL)isClosed;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUnverified;
- (id)localizedCategories;
- (id)localizedCategoriesAtIndex:(unsigned int)arg1;
- (unsigned int)localizedCategoriesCount;
- (id)mapsURL;
- (id)name;
- (id)notice;
- (id)openHours;
- (id)openHoursAtIndex:(unsigned int)arg1;
- (unsigned int)openHoursCount;
- (id)phoneticName;
- (id)phoneticNotice;
- (id)photoAtIndex:(unsigned int)arg1;
- (id)photos;
- (unsigned int)photosCount;
- (id)ratingAtIndex:(unsigned int)arg1;
- (id)ratings;
- (unsigned int)ratingsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributeKeyValues:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setCanBeCorrectedByBusinessOwner:(BOOL)arg1;
- (void)setCategorys:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setHasCanBeCorrectedByBusinessOwner:(BOOL)arg1;
- (void)setHasIsClosed:(BOOL)arg1;
- (void)setHasIsUnverified:(BOOL)arg1;
- (void)setHasTotalNumberOfPhotos:(BOOL)arg1;
- (void)setHasUID:(BOOL)arg1;
- (void)setHasVersion:(BOOL)arg1;
- (void)setIsClosed:(BOOL)arg1;
- (void)setIsUnverified:(BOOL)arg1;
- (void)setLocalizedCategories:(id)arg1;
- (void)setMapsURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotice:(id)arg1;
- (void)setOpenHours:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setPhoneticNotice:(id)arg1;
- (void)setPhotos:(id)arg1;
- (void)setRatings:(id)arg1;
- (void)setSources:(id)arg1;
- (void)setStarRatings:(id)arg1;
- (void)setTelephone:(id)arg1;
- (void)setTotalNumberOfPhotos:(unsigned int)arg1;
- (void)setUID:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (void)setVersion:(int)arg1;
- (id)sourceAtIndex:(unsigned int)arg1;
- (id)sources;
- (unsigned int)sourcesCount;
- (id)starRatingAtIndex:(unsigned int)arg1;
- (id)starRatings;
- (unsigned int)starRatingsCount;
- (id)telephone;
- (unsigned int)totalNumberOfPhotos;
- (unsigned long long)uID;
- (id)uRL;
- (int)version;
- (void)writeTo:(id)arg1;

@end