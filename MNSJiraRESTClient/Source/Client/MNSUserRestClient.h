//
//  MNSUserRestClient.h
//
//  Copyright 2014 MediaNet Software
//  This file is part of MNSJiraRESTClient.
//
//  MNSJiraRESTClient is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License.
//
//  MNSJiraRESTClient is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with MNSJiraRESTClient.  If not, see <http://www.gnu.org/licenses/>.
#import "MNSGenericRestClient.h"
#import "MNSUser.h"

@interface MNSUserRestClient : MNSGenericRestClient {
	NSString *_userURLString;
}

- (void)getUserByEmail:(NSString *)email success:(void (^)(MNSUser *userDTO))success fail:(MNSRestClientFailBlock)fail;

- (void)getUserByUsername:(NSString *)username success:(void (^)(MNSUser *userDTO))success fail:(MNSRestClientFailBlock)fail;

- (void)getUserByURLString:(NSString *)urlString success:(void (^)(MNSUser *userDTO))success fail:(MNSRestClientFailBlock)fail;

- (void)searchUsersWithUsername:(NSString*)username success:(void (^)(NSArray *users))success fail:(MNSRestClientFailBlock)fail;

- (void)getAssignableUsersByProjectKey:(NSString*)projectKey success:(void (^)(NSArray *users))success fail:(MNSRestClientFailBlock)fail;

@end
