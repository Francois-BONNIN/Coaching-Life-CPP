<?php
namespace App;

use Illuminate\Database\Eloquent\Model;

class Task extends Model
{
 
    public function category()
    {
        return $this->belongsTo('\App\Category');
    }

    public function users()
    {
        return $this->belongsTo('\App\Users');
    }
    /**
     * The attributes that are mass assignable.
     *
     * @var array
     */
    protected $fillable = [
        'id', 'title', 'date', 'description', 'completed'
    ];
}