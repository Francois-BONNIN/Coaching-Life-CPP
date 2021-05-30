<?php
namespace App;

use Illuminate\Database\Eloquent\Model;

class Coach extends Model
{
 
    public function category()
    {
        return $this->belongsTo('\App\Category');
    }
    /**
     * The attributes that are mass assignable.
     *
     * @var array
     */
    protected $fillable = [
        'id', 'title', 'description', 'completed'
    ];
}