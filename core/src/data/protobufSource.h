#pragma once

#include "dataSource.h"
#include "mapTile.h"
#include "tileData.h"


class ProtobufSource : public NetworkDataSource {
    
protected:
    
    virtual std::shared_ptr<TileData> parse(const MapTile& _tile, std::vector<char>& _rawData) override;
    
public:
    
    ProtobufSource();
    
};
