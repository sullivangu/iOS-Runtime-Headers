/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebUserContentURLPatternPrivate : NSObject {
    struct UserContentURLPattern { 
        boolm_invalid; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_scheme; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_host; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_path; 
        boolm_matchSubdomains; 
    } pattern;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end